#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopLoader.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopLoader::class$ = NULL;
      jmethodID *AbstractEopLoader::mids$ = NULL;
      bool AbstractEopLoader::live$ = false;

      jclass AbstractEopLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c228debf8e43fa0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Ljava/util/function/Supplier;)V");
          mids$[mid_getUtc_c39031284193adbe] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractEopLoader::AbstractEopLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::java::util::function::Supplier & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2c228debf8e43fa0, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractEopLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractEopLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopLoader)[] = {
        { Py_tp_methods, t_AbstractEopLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractEopLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AbstractEopLoader, t_AbstractEopLoader, AbstractEopLoader);

      void t_AbstractEopLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopLoader), &PY_TYPE_DEF(AbstractEopLoader), module, "AbstractEopLoader", 0);
      }

      void t_AbstractEopLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "class_", make_descriptor(AbstractEopLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "wrapfn_", make_descriptor(t_AbstractEopLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractEopLoader::wrap_Object(AbstractEopLoader(((t_AbstractEopLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        ::java::util::function::Supplier a2((jobject) NULL);
        PyTypeObject **p2;
        AbstractEopLoader object((jobject) NULL);

        if (!parseArgs(args, "skK", ::org::orekit::data::DataProvidersManager::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &p2, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractEopLoader(a0, a1, a2));
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
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Header::SsrIgm07Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *HaloOrbit::class$ = NULL;
      jmethodID *HaloOrbit::mids$ = NULL;
      bool HaloOrbit::live$ = false;

      jclass HaloOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/HaloOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_075542267323df55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;DLorg/orekit/orbits/LibrationOrbitFamily;)V");
          mids$[mid_init$_6ca73a52ae88cb29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_e2324264d8e2d238] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaloOrbit::HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1, const ::org::orekit::orbits::LibrationOrbitFamily & a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_075542267323df55, a0.this$, a1, a2.this$)) {}

      HaloOrbit::HaloOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ca73a52ae88cb29, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_HaloOrbit__methods_[] = {
        DECLARE_METHOD(t_HaloOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaloOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaloOrbit)[] = {
        { Py_tp_methods, t_HaloOrbit__methods_ },
        { Py_tp_init, (void *) t_HaloOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaloOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(HaloOrbit, t_HaloOrbit, HaloOrbit);

      void t_HaloOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(HaloOrbit), &PY_TYPE_DEF(HaloOrbit), module, "HaloOrbit", 0);
      }

      void t_HaloOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "class_", make_descriptor(HaloOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "wrapfn_", make_descriptor(t_HaloOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaloOrbit::initializeClass, 1)))
          return NULL;
        return t_HaloOrbit::wrap_Object(HaloOrbit(((t_HaloOrbit *) arg)->object.this$));
      }
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaloOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::orbits::LibrationOrbitFamily a2((jobject) NULL);
            PyTypeObject **p2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::orbits::RichardsonExpansion::initializeClass, ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SemiDefinitePositiveCholeskyDecomposition::class$ = NULL;
      jmethodID *SemiDefinitePositiveCholeskyDecomposition::mids$ = NULL;
      bool SemiDefinitePositiveCholeskyDecomposition::live$ = false;
      jdouble SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD = (jdouble) 0;

      jclass SemiDefinitePositiveCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getL_688b496048ff947b] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_688b496048ff947b] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "POSITIVITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_688b496048ff947b]));
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
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_SemiDefinitePositiveCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, lT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SemiDefinitePositiveCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getLT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SemiDefinitePositiveCholeskyDecomposition)[] = {
        { Py_tp_methods, t_SemiDefinitePositiveCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_SemiDefinitePositiveCholeskyDecomposition_init_ },
        { Py_tp_getset, t_SemiDefinitePositiveCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SemiDefinitePositiveCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SemiDefinitePositiveCholeskyDecomposition, t_SemiDefinitePositiveCholeskyDecomposition, SemiDefinitePositiveCholeskyDecomposition);

      void t_SemiDefinitePositiveCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), &PY_TYPE_DEF(SemiDefinitePositiveCholeskyDecomposition), module, "SemiDefinitePositiveCholeskyDecomposition", 0);
      }

      void t_SemiDefinitePositiveCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "class_", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "wrapfn_", make_descriptor(t_SemiDefinitePositiveCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(SemiDefinitePositiveCholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "POSITIVITY_THRESHOLD", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD));
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_SemiDefinitePositiveCholeskyDecomposition::wrap_Object(SemiDefinitePositiveCholeskyDecomposition(((t_SemiDefinitePositiveCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0, a1));
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

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerMode::class$ = NULL;
        jmethodID *StepNormalizerMode::mids$ = NULL;
        bool StepNormalizerMode::live$ = false;
        StepNormalizerMode *StepNormalizerMode::INCREMENT = NULL;
        StepNormalizerMode *StepNormalizerMode::MULTIPLES = NULL;

        jclass StepNormalizerMode::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerMode");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7d0ff73f91aa4c0f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerMode;");
            mids$[mid_values_6ff80e8074cf2904] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerMode;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INCREMENT = new StepNormalizerMode(env->getStaticObjectField(cls, "INCREMENT", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            MULTIPLES = new StepNormalizerMode(env->getStaticObjectField(cls, "MULTIPLES", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizerMode StepNormalizerMode::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7d0ff73f91aa4c0f], a0.this$));
        }

        JArray< StepNormalizerMode > StepNormalizerMode::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerMode >(env->callStaticObjectMethod(cls, mids$[mid_values_6ff80e8074cf2904]));
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
        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args);
        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data);
        static PyGetSetDef t_StepNormalizerMode__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerMode, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerMode__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerMode, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerMode, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerMode)[] = {
          { Py_tp_methods, t_StepNormalizerMode__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerMode__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerMode)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerMode, t_StepNormalizerMode, StepNormalizerMode);
        PyObject *t_StepNormalizerMode::wrap_Object(const StepNormalizerMode& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerMode::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerMode), &PY_TYPE_DEF(StepNormalizerMode), module, "StepNormalizerMode", 0);
        }

        void t_StepNormalizerMode::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "class_", make_descriptor(StepNormalizerMode::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "wrapfn_", make_descriptor(t_StepNormalizerMode::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerMode::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "INCREMENT", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::INCREMENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "MULTIPLES", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::MULTIPLES)));
        }

        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerMode::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerMode::wrap_Object(StepNormalizerMode(((t_StepNormalizerMode *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerMode::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerMode result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::valueOf(a0));
            return t_StepNormalizerMode::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type)
        {
          JArray< StepNormalizerMode > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerMode::wrap_jobject);
        }
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
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
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeStampedCache::class$ = NULL;
      jmethodID *FieldTimeStampedCache::mids$ = NULL;
      bool FieldTimeStampedCache::live$ = false;

      jclass FieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_f8d8d28f6791aa76] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_f8d8d28f6791aa76] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_92d676459a63dcda] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getNeighborsSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_f8d8d28f6791aa76]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_f8d8d28f6791aa76]));
      }

      ::java::util::stream::Stream FieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_92d676459a63dcda], a0.this$));
      }

      jint FieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_570ce0828f81a2c1]);
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
      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_FieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedCache)[] = {
        { Py_tp_methods, t_FieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedCache, t_FieldTimeStampedCache, FieldTimeStampedCache);
      PyObject *t_FieldTimeStampedCache::wrap_Object(const FieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedCache), &PY_TYPE_DEF(FieldTimeStampedCache), module, "FieldTimeStampedCache", 0);
      }

      void t_FieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "class_", make_descriptor(FieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "wrapfn_", make_descriptor(t_FieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedCache::wrap_Object(FieldTimeStampedCache(((t_FieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
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
          mids$[mid_init$_628ee7a3e714b75c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1Frame::L1Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_628ee7a3e714b75c, a0.this$, a1.this$)) {}
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
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxEval::class$ = NULL;
      jmethodID *MaxEval::mids$ = NULL;
      bool MaxEval::live$ = false;

      jclass MaxEval::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxEval");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxEval_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEval", "()I");
          mids$[mid_unlimited_eef1161a66513938] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxEval;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxEval::MaxEval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      jint MaxEval::getMaxEval() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEval_570ce0828f81a2c1]);
      }

      MaxEval MaxEval::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxEval(env->callStaticObjectMethod(cls, mids$[mid_unlimited_eef1161a66513938]));
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
      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self);
      static PyObject *t_MaxEval_unlimited(PyTypeObject *type);
      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data);
      static PyGetSetDef t_MaxEval__fields_[] = {
        DECLARE_GET_FIELD(t_MaxEval, maxEval),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxEval__methods_[] = {
        DECLARE_METHOD(t_MaxEval, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, getMaxEval, METH_NOARGS),
        DECLARE_METHOD(t_MaxEval, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxEval)[] = {
        { Py_tp_methods, t_MaxEval__methods_ },
        { Py_tp_init, (void *) t_MaxEval_init_ },
        { Py_tp_getset, t_MaxEval__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxEval)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxEval, t_MaxEval, MaxEval);

      void t_MaxEval::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxEval), &PY_TYPE_DEF(MaxEval), module, "MaxEval", 0);
      }

      void t_MaxEval::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "class_", make_descriptor(MaxEval::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "wrapfn_", make_descriptor(t_MaxEval::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxEval::initializeClass, 1)))
          return NULL;
        return t_MaxEval::wrap_Object(MaxEval(((t_MaxEval *) arg)->object.this$));
      }
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxEval::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxEval object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxEval(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEval());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxEval_unlimited(PyTypeObject *type)
      {
        MaxEval result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxEval::unlimited());
        return t_MaxEval::wrap_Object(result);
      }

      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEval());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *GlobalIonosphereMapModel::class$ = NULL;
          jmethodID *GlobalIonosphereMapModel::mids$ = NULL;
          bool GlobalIonosphereMapModel::live$ = false;

          jclass GlobalIonosphereMapModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_f7987dfd5a1a9569] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;[Lorg/orekit/data/DataSource;)V");
              mids$[mid_init$_c9696a3ab5455033] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale & a0, const JArray< ::org::orekit::data::DataSource > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7987dfd5a1a9569, a0.this$, a1.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9696a3ab5455033, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List GlobalIonosphereMapModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self);
          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args);
          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data);
          static PyGetSetDef t_GlobalIonosphereMapModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalIonosphereMapModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalIonosphereMapModel__methods_[] = {
            DECLARE_METHOD(t_GlobalIonosphereMapModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalIonosphereMapModel)[] = {
            { Py_tp_methods, t_GlobalIonosphereMapModel__methods_ },
            { Py_tp_init, (void *) t_GlobalIonosphereMapModel_init_ },
            { Py_tp_getset, t_GlobalIonosphereMapModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalIonosphereMapModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalIonosphereMapModel, t_GlobalIonosphereMapModel, GlobalIonosphereMapModel);

          void t_GlobalIonosphereMapModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalIonosphereMapModel), &PY_TYPE_DEF(GlobalIonosphereMapModel), module, "GlobalIonosphereMapModel", 0);
          }

          void t_GlobalIonosphereMapModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "class_", make_descriptor(GlobalIonosphereMapModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "wrapfn_", make_descriptor(t_GlobalIonosphereMapModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalIonosphereMapModel::initializeClass, 1)))
              return NULL;
            return t_GlobalIonosphereMapModel::wrap_Object(GlobalIonosphereMapModel(((t_GlobalIonosphereMapModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalIonosphereMapModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                JArray< ::org::orekit::data::DataSource > a1((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "k[k", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1, a2));
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

          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data)
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
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinates::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinates::mids$ = NULL;
      bool FieldAbsolutePVCoordinates::live$ = false;

      jclass FieldAbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_74ead997d56fb57d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
          mids$[mid_init$_7fbe60a14a017b36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_3968685f3cfde387] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_157e0412941b659e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d8a2a240753d0d6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c20373b9658fec77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_be3f7fa2cc96b877] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_950d0e907b47dcae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d2fe6d0d922f371d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_f0f2f7e8c4812fcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_f7bcbf2fe13428b6] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_f336610fe073f215] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_1e9400b30e4a1955] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_shiftedBy_5fb9177ede99debe] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_toAbsolutePVCoordinates_3484f681e5893171] = env->getMethodID(cls, "toAbsolutePVCoordinates", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_d973c40fc0211a5b] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a1) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_74ead997d56fb57d, a0.this$, a1.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldAbsolutePVCoordinates & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7fbe60a14a017b36, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3968685f3cfde387, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_157e0412941b659e, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d8a2a240753d0d6b, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c20373b9658fec77, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_be3f7fa2cc96b877, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_950d0e907b47dcae, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d2fe6d0d922f371d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const FieldAbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f0f2f7e8c4812fcf, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f89522ff77904397]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f7bcbf2fe13428b6], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f336610fe073f215], a0.this$));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_1e9400b30e4a1955], a0));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_5fb9177ede99debe], a0.this$));
      }

      ::org::orekit::utils::AbsolutePVCoordinates FieldAbsolutePVCoordinates::toAbsolutePVCoordinates() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_toAbsolutePVCoordinates_3484f681e5893171]));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_d973c40fc0211a5b]));
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
      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toAbsolutePVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toTaylorProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedFieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinates, t_FieldAbsolutePVCoordinates, FieldAbsolutePVCoordinates);
      PyObject *t_FieldAbsolutePVCoordinates::wrap_Object(const FieldAbsolutePVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinates), &PY_TYPE_DEF(FieldAbsolutePVCoordinates), module, "FieldAbsolutePVCoordinates", 0);
      }

      void t_FieldAbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "class_", make_descriptor(FieldAbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinates::wrap_Object(FieldAbsolutePVCoordinates(((t_FieldAbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldAbsolutePVCoordinates::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldAbsolutePVCoordinates::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            FieldAbsolutePVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args)
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
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsolutePVCoordinates());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.toTaylorProvider());
        return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFields::class$ = NULL;
        jmethodID *GeoMagneticFields::mids$ = NULL;
        bool GeoMagneticFields::live$ = false;

        jclass GeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_4aeee65bc3c68b0b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_11ad1d91265636f7] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_11ad1d91265636f7] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_4aeee65bc3c68b0b], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_11ad1d91265636f7], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_11ad1d91265636f7], a0));
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
        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args);
        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_GeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_GeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFields)[] = {
          { Py_tp_methods, t_GeoMagneticFields__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFields, t_GeoMagneticFields, GeoMagneticFields);

        void t_GeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFields), &PY_TYPE_DEF(GeoMagneticFields), module, "GeoMagneticFields", 0);
        }

        void t_GeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "class_", make_descriptor(GeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "wrapfn_", make_descriptor(t_GeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFields::wrap_Object(GeoMagneticFields(((t_GeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractPropagator::class$ = NULL;
      jmethodID *AbstractPropagator::mids$ = NULL;
      bool AbstractPropagator::live$ = false;

      jclass AbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_808e9f10a9e4927b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setupMatricesComputation_ae2572b7a98390d4] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");
          mids$[mid_updateAdditionalStates_f43130c50e9fafeb] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_initializePropagation_0fa09c18fee449d5] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_600a2a61652bc473] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setStartDate_600a2a61652bc473] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_updateUnmanagedStates_f43130c50e9fafeb] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getStartDate_85703d13e302437e] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_stateChanged_0ee5c56004643a2e] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_getHarvester_c46c094dc8f7c2fc] = env->getMethodID(cls, "getHarvester", "()Lorg/orekit/propagation/AbstractMatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4], a0.this$);
      }

      ::java::util::List AbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_2afa36052df4765d]));
      }

      ::org::orekit::attitudes::AttitudeProvider AbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
      }

      ::org::orekit::frames::Frame AbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
      }

      JArray< ::java::lang::String > AbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer AbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_808e9f10a9e4927b]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbstractPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      jboolean AbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fbff2ff5554d95e1], a0.this$));
      }

      void AbstractPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
      }

      void AbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
      }

      ::org::orekit::propagation::MatricesHarvester AbstractPropagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_ae2572b7a98390d4], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data);
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data);
      static PyGetSetDef t_AbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_AbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_AbstractPropagator, frame),
        DECLARE_GET_FIELD(t_AbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_AbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_AbstractPropagator, multiplexer),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_AbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractPropagator)[] = {
        { Py_tp_methods, t_AbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractPropagator, t_AbstractPropagator, AbstractPropagator);

      void t_AbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractPropagator), &PY_TYPE_DEF(AbstractPropagator), module, "AbstractPropagator", 0);
      }

      void t_AbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "class_", make_descriptor(AbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "wrapfn_", make_descriptor(t_AbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_AbstractPropagator::wrap_Object(AbstractPropagator(((t_AbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/IterationListener.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationManager::class$ = NULL;
      jmethodID *IterationManager::mids$ = NULL;
      bool IterationManager::live$ = false;

      jclass IterationManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_64a8f945b6007642] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_addIterationListener_ec6f037c8dacda1d] = env->getMethodID(cls, "addIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_fireInitializationEvent_5d333913f82828b1] = env->getMethodID(cls, "fireInitializationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationPerformedEvent_5d333913f82828b1] = env->getMethodID(cls, "fireIterationPerformedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationStartedEvent_5d333913f82828b1] = env->getMethodID(cls, "fireIterationStartedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireTerminationEvent_5d333913f82828b1] = env->getMethodID(cls, "fireTerminationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_incrementIterationCount_0fa09c18fee449d5] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_removeIterationListener_ec6f037c8dacda1d] = env->getMethodID(cls, "removeIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_resetIterationCount_0fa09c18fee449d5] = env->getMethodID(cls, "resetIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationManager::IterationManager(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      IterationManager::IterationManager(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64a8f945b6007642, a0, a1.this$)) {}

      void IterationManager::addIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addIterationListener_ec6f037c8dacda1d], a0.this$);
      }

      void IterationManager::fireInitializationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireInitializationEvent_5d333913f82828b1], a0.this$);
      }

      void IterationManager::fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationPerformedEvent_5d333913f82828b1], a0.this$);
      }

      void IterationManager::fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationStartedEvent_5d333913f82828b1], a0.this$);
      }

      void IterationManager::fireTerminationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireTerminationEvent_5d333913f82828b1], a0.this$);
      }

      jint IterationManager::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
      }

      jint IterationManager::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_570ce0828f81a2c1]);
      }

      void IterationManager::incrementIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_incrementIterationCount_0fa09c18fee449d5]);
      }

      void IterationManager::removeIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeIterationListener_ec6f037c8dacda1d], a0.this$);
      }

      void IterationManager::resetIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_resetIterationCount_0fa09c18fee449d5]);
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
      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_getIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data);
      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data);
      static PyGetSetDef t_IterationManager__fields_[] = {
        DECLARE_GET_FIELD(t_IterationManager, iterations),
        DECLARE_GET_FIELD(t_IterationManager, maxIterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationManager__methods_[] = {
        DECLARE_METHOD(t_IterationManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, addIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, fireInitializationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationPerformedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationStartedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireTerminationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, incrementIterationCount, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, removeIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, resetIterationCount, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationManager)[] = {
        { Py_tp_methods, t_IterationManager__methods_ },
        { Py_tp_init, (void *) t_IterationManager_init_ },
        { Py_tp_getset, t_IterationManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterationManager, t_IterationManager, IterationManager);

      void t_IterationManager::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationManager), &PY_TYPE_DEF(IterationManager), module, "IterationManager", 0);
      }

      void t_IterationManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "class_", make_descriptor(IterationManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "wrapfn_", make_descriptor(t_IterationManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationManager::initializeClass, 1)))
          return NULL;
        return t_IterationManager::wrap_Object(IterationManager(((t_IterationManager *) arg)->object.this$));
      }
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterationManager(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = IterationManager(a0, a1));
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

      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireInitializationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireInitializationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationPerformedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationPerformedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationStartedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationStartedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireTerminationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireTerminationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_getIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.incrementIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.resetIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data)
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
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *DetectorBasedEventState::class$ = NULL;
        jmethodID *DetectorBasedEventState::mids$ = NULL;
        bool DetectorBasedEventState::live$ = false;

        jclass DetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/DetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1acd9de872b3c9bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_doEvent_f67305c017c9762e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_37ca30d971b4fe79] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_d3000cf67fb1b23b] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_getEventTime_dff5885c2c873297] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_reinitializeBegin_8c00288d760ba078] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_tryAdvance_094255e133ccdcf3] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DetectorBasedEventState::DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1acd9de872b3c9bd, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence DetectorBasedEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_f67305c017c9762e], a0.this$));
        }

        jboolean DetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_37ca30d971b4fe79], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector DetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_d3000cf67fb1b23b]));
        }

        jdouble DetectorBasedEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_dff5885c2c873297]);
        }

        void DetectorBasedEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
        }

        void DetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_8c00288d760ba078], a0.this$);
        }

        jboolean DetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_094255e133ccdcf3], a0.this$, a1.this$);
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
        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data);
        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data);
        static PyGetSetDef t_DetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_DetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DetectorBasedEventState)[] = {
          { Py_tp_methods, t_DetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_DetectorBasedEventState_init_ },
          { Py_tp_getset, t_DetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DetectorBasedEventState, t_DetectorBasedEventState, DetectorBasedEventState);

        void t_DetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(DetectorBasedEventState), &PY_TYPE_DEF(DetectorBasedEventState), module, "DetectorBasedEventState", 0);
        }

        void t_DetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "class_", make_descriptor(DetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "wrapfn_", make_descriptor(t_DetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_DetectorBasedEventState::wrap_Object(DetectorBasedEventState(((t_DetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          DetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
          {
            INT_CALL(object = DetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *Covariance::class$ = NULL;
        jmethodID *Covariance::mids$ = NULL;
        bool Covariance::live$ = false;

        jclass Covariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/Covariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_eade0e830cb99555] = env->getMethodID(cls, "<init>", "([[DZ)V");
            mids$[mid_init$_a95dc6fea74c2d0e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Z)V");
            mids$[mid_covariance_b561c6892e9976f8] = env->getMethodID(cls, "covariance", "([D[D)D");
            mids$[mid_covariance_c98cc76e0ea0aa4c] = env->getMethodID(cls, "covariance", "([D[DZ)D");
            mids$[mid_getCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_computeCovarianceMatrix_e9b72403ad502221] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_dddf4310e653828d] = env->getMethodID(cls, "computeCovarianceMatrix", "([[DZ)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_62c0bfb50b5dacc0] = env->getMethodID(cls, "computeCovarianceMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_08333a1161303d01] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Z)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Covariance::Covariance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eade0e830cb99555, a0.this$, a1)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a95dc6fea74c2d0e, a0.this$, a1)) {}

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_c98cc76e0ea0aa4c], a0.this$, a1.this$, a2);
        }

        ::org::hipparchus::linear::RealMatrix Covariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_688b496048ff947b]));
        }

        jint Covariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
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
      namespace correlation {
        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args);
        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self);
        static PyObject *t_Covariance_getN(t_Covariance *self);
        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data);
        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data);
        static PyGetSetDef t_Covariance__fields_[] = {
          DECLARE_GET_FIELD(t_Covariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_Covariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Covariance__methods_[] = {
          DECLARE_METHOD(t_Covariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, covariance, METH_VARARGS),
          DECLARE_METHOD(t_Covariance, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Covariance, getN, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Covariance)[] = {
          { Py_tp_methods, t_Covariance__methods_ },
          { Py_tp_init, (void *) t_Covariance_init_ },
          { Py_tp_getset, t_Covariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Covariance)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Covariance, t_Covariance, Covariance);

        void t_Covariance::install(PyObject *module)
        {
          installType(&PY_TYPE(Covariance), &PY_TYPE_DEF(Covariance), module, "Covariance", 0);
        }

        void t_Covariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "class_", make_descriptor(Covariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "wrapfn_", make_descriptor(t_Covariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Covariance::initializeClass, 1)))
            return NULL;
          return t_Covariance::wrap_Object(Covariance(((t_Covariance *) arg)->object.this$));
        }
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Covariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Covariance object((jobject) NULL);

              INT_CALL(object = Covariance());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[DZ", &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "kZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
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

        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "covariance", args);
          return NULL;
        }

        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Covariance_getN(t_Covariance *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/NumberFormat.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
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
              mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_b8001d8c3e32b808] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_fd4f6f77e2c9c2bc] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_e7a168c41301bc86] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_7860fb8ee9cfe845] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_84b1343e67eeaa7b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_add_6c46082a7ea5a2f0] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_angle_2814c71be939a588] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_crossProduct_84b1343e67eeaa7b] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_crossProduct_e2a27ed5c4e12f6f] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_2814c71be939a588] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distance1_b4822d5266bca26e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_2814c71be939a588] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceInf_b4822d5266bca26e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_2814c71be939a588] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceSq_b4822d5266bca26e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_2814c71be939a588] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_dotProduct_b4822d5266bca26e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_dotProduct_2814c71be939a588] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_65c7d273e80d497a] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_dff5885c2c873297] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getDelta_dff5885c2c873297] = env->getMethodID(cls, "getDelta", "()D");
              mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_dff5885c2c873297] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_dff5885c2c873297] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
              mids$[mid_getZero_d52645e0d4c07563] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_d52645e0d4c07563] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_orthogonal_d52645e0d4c07563] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_scalarMultiply_9137bba253a33d9c] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_84b1343e67eeaa7b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_6c46082a7ea5a2f0] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

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

          Vector3D::Vector3D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8001d8c3e32b808, a0, a1.this$)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd4f6f77e2c9c2bc, a0, a1.this$, a2, a3.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7a168c41301bc86, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5, jdouble a6, const Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7860fb8ee9cfe845, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector3D Vector3D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_84b1343e67eeaa7b], a0.this$));
          }

          Vector3D Vector3D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_6c46082a7ea5a2f0], a0, a1.this$));
          }

          jdouble Vector3D::angle(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_2814c71be939a588], a0.this$, a1.this$);
          }

          Vector3D Vector3D::crossProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_84b1343e67eeaa7b], a0.this$));
          }

          Vector3D Vector3D::crossProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_e2a27ed5c4e12f6f], a0.this$, a1.this$));
          }

          jdouble Vector3D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Vector3D::distance(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_2814c71be939a588], a0.this$, a1.this$);
          }

          jdouble Vector3D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector3D::distance1(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_2814c71be939a588], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector3D::distanceInf(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_2814c71be939a588], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector3D::distanceSq(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_2814c71be939a588], a0.this$, a1.this$);
          }

          jdouble Vector3D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector3D::dotProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_2814c71be939a588], a0.this$, a1.this$);
          }

          jboolean Vector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jboolean Vector3D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_65c7d273e80d497a], a0.this$);
          }

          jdouble Vector3D::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_dff5885c2c873297]);
          }

          jdouble Vector3D::getDelta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDelta_dff5885c2c873297]);
          }

          jdouble Vector3D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
          }

          jdouble Vector3D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
          }

          jdouble Vector3D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_dff5885c2c873297]);
          }

          jdouble Vector3D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::Space Vector3D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
          }

          jdouble Vector3D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
          }

          jdouble Vector3D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
          }

          jdouble Vector3D::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
          }

          Vector3D Vector3D::getZero() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_getZero_d52645e0d4c07563]));
          }

          jint Vector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean Vector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
          }

          jboolean Vector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          Vector3D Vector3D::negate() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_negate_d52645e0d4c07563]));
          }

          Vector3D Vector3D::orthogonal() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_d52645e0d4c07563]));
          }

          Vector3D Vector3D::scalarMultiply(jdouble a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_9137bba253a33d9c], a0));
          }

          Vector3D Vector3D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_84b1343e67eeaa7b], a0.this$));
          }

          Vector3D Vector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_6c46082a7ea5a2f0], a0, a1.this$));
          }

          JArray< jdouble > Vector3D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
          }

          ::java::lang::String Vector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::java::lang::String Vector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
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
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap::mids$ = NULL;
      bool OpenIntToDoubleHashMap::live$ = false;

      jclass OpenIntToDoubleHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_containsKey_b6e9be1df30aebaf] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_46f85b53d9aedd96] = env->getMethodID(cls, "get", "(I)D");
          mids$[mid_iterator_e07c986a341a62c1] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToDoubleHashMap$Iterator;");
          mids$[mid_put_60d7624725a52590] = env->getMethodID(cls, "put", "(ID)D");
          mids$[mid_remove_46f85b53d9aedd96] = env->getMethodID(cls, "remove", "(I)D");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      jboolean OpenIntToDoubleHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_b6e9be1df30aebaf], a0);
      }

      jdouble OpenIntToDoubleHashMap::get$(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_get_46f85b53d9aedd96], a0);
      }

      ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator OpenIntToDoubleHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_e07c986a341a62c1]));
      }

      jdouble OpenIntToDoubleHashMap::put(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_put_60d7624725a52590], a0, a1);
      }

      jdouble OpenIntToDoubleHashMap::remove(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_remove_46f85b53d9aedd96], a0);
      }

      jint OpenIntToDoubleHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
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
      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self);
      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self);

      static PyMethodDef t_OpenIntToDoubleHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToDoubleHashMap_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap, t_OpenIntToDoubleHashMap, OpenIntToDoubleHashMap);

      void t_OpenIntToDoubleHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap), &PY_TYPE_DEF(OpenIntToDoubleHashMap), module, "OpenIntToDoubleHashMap", 0);
      }

      void t_OpenIntToDoubleHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "class_", make_descriptor(OpenIntToDoubleHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap::wrap_Object(OpenIntToDoubleHashMap(((t_OpenIntToDoubleHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenIntToDoubleHashMap object((jobject) NULL);

            INT_CALL(object = OpenIntToDoubleHashMap());
            self->object = object;
            break;
          }
         case 1:
          {
            jdouble a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0, a1));
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

      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToDoubleHashMap$Iterator::wrap_Object(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *TiesStrategy::class$ = NULL;
        jmethodID *TiesStrategy::mids$ = NULL;
        bool TiesStrategy::live$ = false;
        TiesStrategy *TiesStrategy::AVERAGE = NULL;
        TiesStrategy *TiesStrategy::MAXIMUM = NULL;
        TiesStrategy *TiesStrategy::MINIMUM = NULL;
        TiesStrategy *TiesStrategy::RANDOM = NULL;
        TiesStrategy *TiesStrategy::SEQUENTIAL = NULL;

        jclass TiesStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/TiesStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0bfefbac0e749ba2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_values_321aceda7ff33886] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/TiesStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AVERAGE = new TiesStrategy(env->getStaticObjectField(cls, "AVERAGE", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MAXIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MAXIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MINIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MINIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            RANDOM = new TiesStrategy(env->getStaticObjectField(cls, "RANDOM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            SEQUENTIAL = new TiesStrategy(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TiesStrategy TiesStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return TiesStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0bfefbac0e749ba2], a0.this$));
        }

        JArray< TiesStrategy > TiesStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< TiesStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_321aceda7ff33886]));
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
      namespace ranking {
        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args);
        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_TiesStrategy_values(PyTypeObject *type);
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data);
        static PyGetSetDef t_TiesStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_TiesStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TiesStrategy__methods_[] = {
          DECLARE_METHOD(t_TiesStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_TiesStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TiesStrategy)[] = {
          { Py_tp_methods, t_TiesStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TiesStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TiesStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(TiesStrategy, t_TiesStrategy, TiesStrategy);
        PyObject *t_TiesStrategy::wrap_Object(const TiesStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TiesStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TiesStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(TiesStrategy), &PY_TYPE_DEF(TiesStrategy), module, "TiesStrategy", 0);
        }

        void t_TiesStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "class_", make_descriptor(TiesStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "wrapfn_", make_descriptor(t_TiesStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(TiesStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "AVERAGE", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::AVERAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MAXIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MAXIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MINIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MINIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "RANDOM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::RANDOM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "SEQUENTIAL", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::SEQUENTIAL)));
        }

        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TiesStrategy::initializeClass, 1)))
            return NULL;
          return t_TiesStrategy::wrap_Object(TiesStrategy(((t_TiesStrategy *) arg)->object.this$));
        }
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TiesStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          TiesStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::valueOf(a0));
            return t_TiesStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_TiesStrategy_values(PyTypeObject *type)
        {
          JArray< TiesStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_TiesStrategy::wrap_jobject);
        }
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonFieldSDP4::class$ = NULL;
          jmethodID *PythonFieldSDP4::mids$ = NULL;
          bool PythonFieldSDP4::live$ = false;

          jclass PythonFieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonFieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5151ab0d47c2b93c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_072c8635f2164db9] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepSecularEffects_072c8635f2164db9] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_luniSolarTermsComputation_0fa09c18fee449d5] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldSDP4::PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_5151ab0d47c2b93c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          void PythonFieldSDP4::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonFieldSDP4::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonFieldSDP4::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args);
          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self);
          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args);
          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data);
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data);
          static PyGetSetDef t_PythonFieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldSDP4, self),
            DECLARE_GET_FIELD(t_PythonFieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldSDP4__methods_[] = {
            DECLARE_METHOD(t_PythonFieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldSDP4)[] = {
            { Py_tp_methods, t_PythonFieldSDP4__methods_ },
            { Py_tp_init, (void *) t_PythonFieldSDP4_init_ },
            { Py_tp_getset, t_PythonFieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(PythonFieldSDP4, t_PythonFieldSDP4, PythonFieldSDP4);
          PyObject *t_PythonFieldSDP4::wrap_Object(const PythonFieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldSDP4), &PY_TYPE_DEF(PythonFieldSDP4), module, "PythonFieldSDP4", 1);
          }

          void t_PythonFieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "class_", make_descriptor(PythonFieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "wrapfn_", make_descriptor(t_PythonFieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldSDP4::initializeClass);
            JNINativeMethod methods[] = {
              { "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepPeriodicEffects0 },
              { "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepSecularEffects1 },
              { "luniSolarTermsComputation", "()V", (void *) t_PythonFieldSDP4_luniSolarTermsComputation2 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldSDP4_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldSDP4::initializeClass, 1)))
              return NULL;
            return t_PythonFieldSDP4::wrap_Object(PythonFieldSDP4(((t_PythonFieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
            PyTypeObject **p4;
            PythonFieldSDP4 object((jobject) NULL);

            if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = PythonFieldSDP4(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args)
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

          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepPeriodicEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepSecularEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "luniSolarTermsComputation", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data)
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
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data)
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
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
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
          mids$[mid_init$_9a1656cde9fcd0f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/LagrangianPoints;)V");
          mids$[mid_computeHaloFirstGuess_dc4cc1c1b8c78d14] = env->getMethodID(cls, "computeHaloFirstGuess", "(DLorg/orekit/orbits/LibrationOrbitFamily;DD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunovFirstGuess_194490f1fa641a3f] = env->getMethodID(cls, "computeLyapunovFirstGuess", "(DDD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getCr3bpSystem_5fad4f68327f5e3d] = env->getMethodID(cls, "getCr3bpSystem", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getHaloOrbitalPeriod_dcbc7ce2902fa136] = env->getMethodID(cls, "getHaloOrbitalPeriod", "(D)D");
          mids$[mid_getLagrangianPoint_8b95b3ac4a76acae] = env->getMethodID(cls, "getLagrangianPoint", "()Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_getLyapunovOrbitalPeriod_dcbc7ce2902fa136] = env->getMethodID(cls, "getLyapunovOrbitalPeriod", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RichardsonExpansion::RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::LagrangianPoints & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a1656cde9fcd0f5, a0.this$, a1.this$)) {}

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeHaloFirstGuess(jdouble a0, const ::org::orekit::orbits::LibrationOrbitFamily & a1, jdouble a2, jdouble a3) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeHaloFirstGuess_dc4cc1c1b8c78d14], a0, a1.this$, a2, a3));
      }

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeLyapunovFirstGuess(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunovFirstGuess_194490f1fa641a3f], a0, a1, a2));
      }

      ::org::orekit::bodies::CR3BPSystem RichardsonExpansion::getCr3bpSystem() const
      {
        return ::org::orekit::bodies::CR3BPSystem(env->callObjectMethod(this$, mids$[mid_getCr3bpSystem_5fad4f68327f5e3d]));
      }

      jdouble RichardsonExpansion::getHaloOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHaloOrbitalPeriod_dcbc7ce2902fa136], a0);
      }

      ::org::orekit::utils::LagrangianPoints RichardsonExpansion::getLagrangianPoint() const
      {
        return ::org::orekit::utils::LagrangianPoints(env->callObjectMethod(this$, mids$[mid_getLagrangianPoint_8b95b3ac4a76acae]));
      }

      jdouble RichardsonExpansion::getLyapunovOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLyapunovOrbitalPeriod_dcbc7ce2902fa136], a0);
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
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHull::class$ = NULL;
        jmethodID *ConvexHull::mids$ = NULL;
        bool ConvexHull::live$ = false;

        jclass ConvexHull::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHull");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createRegion_b72f8ac992e26582] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getVertices_55a29d8e9344cdba] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::Region ConvexHull::createRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_b72f8ac992e26582]));
        }

        JArray< ::org::hipparchus::geometry::Point > ConvexHull::getVertices() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getVertices_55a29d8e9344cdba]));
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
      namespace hull {
        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args);
        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self);
        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self);
        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data);
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data);
        static PyGetSetDef t_ConvexHull__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHull, vertices),
          DECLARE_GET_FIELD(t_ConvexHull, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHull__methods_[] = {
          DECLARE_METHOD(t_ConvexHull, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHull, createRegion, METH_NOARGS),
          DECLARE_METHOD(t_ConvexHull, getVertices, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHull)[] = {
          { Py_tp_methods, t_ConvexHull__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHull__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHull)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ConvexHull, t_ConvexHull, ConvexHull);
        PyObject *t_ConvexHull::wrap_Object(const ConvexHull& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHull::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHull::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHull), &PY_TYPE_DEF(ConvexHull), module, "ConvexHull", 0);
        }

        void t_ConvexHull::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "class_", make_descriptor(ConvexHull::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "wrapfn_", make_descriptor(t_ConvexHull::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHull::initializeClass, 1)))
            return NULL;
          return t_ConvexHull::wrap_Object(ConvexHull(((t_ConvexHull *) arg)->object.this$));
        }
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHull::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.createRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVertices());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVertices());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmData::class$ = NULL;
              jmethodID *AcmData::mids$ = NULL;
              bool AcmData::live$ = false;

              jclass AcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7d175ed02a2f74d0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getAttitudeBlocks_2afa36052df4765d] = env->getMethodID(cls, "getAttitudeBlocks", "()Ljava/util/List;");
                  mids$[mid_getAttitudeDeterminationBlock_b824d64d2693b4b1] = env->getMethodID(cls, "getAttitudeDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;");
                  mids$[mid_getCovarianceBlocks_2afa36052df4765d] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_2afa36052df4765d] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getPhysicBlock_e4078fef0c3d5926] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;");
                  mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmData::AcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d175ed02a2f74d0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              ::java::util::List AcmData::getAttitudeBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeBlocks_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination AcmData::getAttitudeDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination(env->callObjectMethod(this$, mids$[mid_getAttitudeDeterminationBlock_b824d64d2693b4b1]));
              }

              ::java::util::List AcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_2afa36052df4765d]));
              }

              ::java::util::List AcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties AcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_e4078fef0c3d5926]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined AcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483]));
              }

              void AcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self);
              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self);
              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self);
              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg);
              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data);
              static PyGetSetDef t_AcmData__fields_[] = {
                DECLARE_GET_FIELD(t_AcmData, attitudeBlocks),
                DECLARE_GET_FIELD(t_AcmData, attitudeDeterminationBlock),
                DECLARE_GET_FIELD(t_AcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_AcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_AcmData, physicBlock),
                DECLARE_GET_FIELD(t_AcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmData__methods_[] = {
                DECLARE_METHOD(t_AcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, getAttitudeBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getAttitudeDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmData)[] = {
                { Py_tp_methods, t_AcmData__methods_ },
                { Py_tp_init, (void *) t_AcmData_init_ },
                { Py_tp_getset, t_AcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmData, t_AcmData, AcmData);

              void t_AcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmData), &PY_TYPE_DEF(AcmData), module, "AcmData", 0);
              }

              void t_AcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "class_", make_descriptor(AcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "wrapfn_", make_descriptor(t_AcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmData::initializeClass, 1)))
                  return NULL;
                return t_AcmData::wrap_Object(AcmData(((t_AcmData *) arg)->object.this$));
              }
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                AcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5))
                {
                  INT_CALL(object = AcmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(result);
              }

              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovarianceHistory));
              }

              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeManeuver));
              }

              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CenterName::class$ = NULL;
          jmethodID *CenterName::mids$ = NULL;
          bool CenterName::live$ = false;
          CenterName *CenterName::EARTH = NULL;
          CenterName *CenterName::EARTH_MOON = NULL;
          CenterName *CenterName::JUPITER = NULL;
          CenterName *CenterName::MARS = NULL;
          CenterName *CenterName::MERCURY = NULL;
          CenterName *CenterName::MOON = NULL;
          CenterName *CenterName::NEPTUNE = NULL;
          CenterName *CenterName::PLUTO = NULL;
          CenterName *CenterName::SATURN = NULL;
          CenterName *CenterName::SOLAR_SYSTEM_BARYCENTER = NULL;
          CenterName *CenterName::SUN = NULL;
          CenterName *CenterName::URANUS = NULL;
          CenterName *CenterName::VENUS = NULL;

          jclass CenterName::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CenterName");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCelestialBody_624686a38a6b107c] = env->getMethodID(cls, "getCelestialBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getCelestialBody_e2da993b112eb885] = env->getMethodID(cls, "getCelestialBody", "(Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_guessCenter_4120982664ebec0c] = env->getStaticMethodID(cls, "guessCenter", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_26124556454e0c08] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_valueOf_54896343e052f441] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_values_228befef05db3571] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CenterName;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EARTH = new CenterName(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              EARTH_MOON = new CenterName(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              JUPITER = new CenterName(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MARS = new CenterName(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MERCURY = new CenterName(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MOON = new CenterName(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              NEPTUNE = new CenterName(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              PLUTO = new CenterName(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SATURN = new CenterName(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SOLAR_SYSTEM_BARYCENTER = new CenterName(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SUN = new CenterName(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              URANUS = new CenterName(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              VENUS = new CenterName(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_624686a38a6b107c]));
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody(const ::org::orekit::bodies::CelestialBodies & a0) const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_e2da993b112eb885], a0.this$));
          }

          ::java::lang::String CenterName::guessCenter(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessCenter_4120982664ebec0c], a0.this$));
          }

          CenterName CenterName::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_map_26124556454e0c08], a0.this$));
          }

          CenterName CenterName::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_valueOf_54896343e052f441], a0.this$));
          }

          JArray< CenterName > CenterName::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CenterName >(env->callStaticObjectMethod(cls, mids$[mid_values_228befef05db3571]));
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
          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CenterName_values(PyTypeObject *type);
          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data);
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data);
          static PyGetSetDef t_CenterName__fields_[] = {
            DECLARE_GET_FIELD(t_CenterName, celestialBody),
            DECLARE_GET_FIELD(t_CenterName, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CenterName__methods_[] = {
            DECLARE_METHOD(t_CenterName, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, of_, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, getCelestialBody, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, guessCenter, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CenterName, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CenterName)[] = {
            { Py_tp_methods, t_CenterName__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CenterName__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CenterName)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CenterName, t_CenterName, CenterName);
          PyObject *t_CenterName::wrap_Object(const CenterName& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CenterName::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CenterName::install(PyObject *module)
          {
            installType(&PY_TYPE(CenterName), &PY_TYPE_DEF(CenterName), module, "CenterName", 0);
          }

          void t_CenterName::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "class_", make_descriptor(CenterName::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "wrapfn_", make_descriptor(t_CenterName::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "boxfn_", make_descriptor(boxObject));
            env->getClass(CenterName::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH_MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH_MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "JUPITER", make_descriptor(t_CenterName::wrap_Object(*CenterName::JUPITER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MARS", make_descriptor(t_CenterName::wrap_Object(*CenterName::MARS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MERCURY", make_descriptor(t_CenterName::wrap_Object(*CenterName::MERCURY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "NEPTUNE", make_descriptor(t_CenterName::wrap_Object(*CenterName::NEPTUNE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "PLUTO", make_descriptor(t_CenterName::wrap_Object(*CenterName::PLUTO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SATURN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SATURN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_CenterName::wrap_Object(*CenterName::SOLAR_SYSTEM_BARYCENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SUN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SUN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "URANUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::URANUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "VENUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::VENUS)));
          }

          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CenterName::initializeClass, 1)))
              return NULL;
            return t_CenterName::wrap_Object(CenterName(((t_CenterName *) arg)->object.this$));
          }
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CenterName::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialBody());
                return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getCelestialBody(a0));
                  return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getCelestialBody", args);
            return NULL;
          }

          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::guessCenter(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessCenter", arg);
            return NULL;
          }

          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::map(a0));
              return t_CenterName::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::valueOf(a0));
              return t_CenterName::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CenterName_values(PyTypeObject *type)
          {
            JArray< CenterName > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::values());
            return JArray<jobject>(result.this$).wrap(t_CenterName::wrap_jobject);
          }
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getCelestialBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationType::class$ = NULL;
      jmethodID *ObservationType::mids$ = NULL;
      bool ObservationType::live$ = false;
      ObservationType *ObservationType::C0 = NULL;
      ObservationType *ObservationType::C1 = NULL;
      ObservationType *ObservationType::C1A = NULL;
      ObservationType *ObservationType::C1B = NULL;
      ObservationType *ObservationType::C1C = NULL;
      ObservationType *ObservationType::C1D = NULL;
      ObservationType *ObservationType::C1E = NULL;
      ObservationType *ObservationType::C1I = NULL;
      ObservationType *ObservationType::C1L = NULL;
      ObservationType *ObservationType::C1M = NULL;
      ObservationType *ObservationType::C1P = NULL;
      ObservationType *ObservationType::C1Q = NULL;
      ObservationType *ObservationType::C1S = NULL;
      ObservationType *ObservationType::C1W = NULL;
      ObservationType *ObservationType::C1X = NULL;
      ObservationType *ObservationType::C1Y = NULL;
      ObservationType *ObservationType::C1Z = NULL;
      ObservationType *ObservationType::C2 = NULL;
      ObservationType *ObservationType::C2C = NULL;
      ObservationType *ObservationType::C2D = NULL;
      ObservationType *ObservationType::C2I = NULL;
      ObservationType *ObservationType::C2L = NULL;
      ObservationType *ObservationType::C2M = NULL;
      ObservationType *ObservationType::C2P = NULL;
      ObservationType *ObservationType::C2Q = NULL;
      ObservationType *ObservationType::C2S = NULL;
      ObservationType *ObservationType::C2W = NULL;
      ObservationType *ObservationType::C2X = NULL;
      ObservationType *ObservationType::C2Y = NULL;
      ObservationType *ObservationType::C3I = NULL;
      ObservationType *ObservationType::C3Q = NULL;
      ObservationType *ObservationType::C3X = NULL;
      ObservationType *ObservationType::C4A = NULL;
      ObservationType *ObservationType::C4B = NULL;
      ObservationType *ObservationType::C4X = NULL;
      ObservationType *ObservationType::C5 = NULL;
      ObservationType *ObservationType::C5A = NULL;
      ObservationType *ObservationType::C5B = NULL;
      ObservationType *ObservationType::C5C = NULL;
      ObservationType *ObservationType::C5D = NULL;
      ObservationType *ObservationType::C5I = NULL;
      ObservationType *ObservationType::C5P = NULL;
      ObservationType *ObservationType::C5Q = NULL;
      ObservationType *ObservationType::C5X = NULL;
      ObservationType *ObservationType::C5Z = NULL;
      ObservationType *ObservationType::C6 = NULL;
      ObservationType *ObservationType::C6A = NULL;
      ObservationType *ObservationType::C6B = NULL;
      ObservationType *ObservationType::C6C = NULL;
      ObservationType *ObservationType::C6D = NULL;
      ObservationType *ObservationType::C6E = NULL;
      ObservationType *ObservationType::C6I = NULL;
      ObservationType *ObservationType::C6L = NULL;
      ObservationType *ObservationType::C6P = NULL;
      ObservationType *ObservationType::C6Q = NULL;
      ObservationType *ObservationType::C6S = NULL;
      ObservationType *ObservationType::C6X = NULL;
      ObservationType *ObservationType::C6Z = NULL;
      ObservationType *ObservationType::C7 = NULL;
      ObservationType *ObservationType::C7D = NULL;
      ObservationType *ObservationType::C7I = NULL;
      ObservationType *ObservationType::C7P = NULL;
      ObservationType *ObservationType::C7Q = NULL;
      ObservationType *ObservationType::C7X = NULL;
      ObservationType *ObservationType::C7Z = NULL;
      ObservationType *ObservationType::C8 = NULL;
      ObservationType *ObservationType::C8D = NULL;
      ObservationType *ObservationType::C8I = NULL;
      ObservationType *ObservationType::C8P = NULL;
      ObservationType *ObservationType::C8Q = NULL;
      ObservationType *ObservationType::C8X = NULL;
      ObservationType *ObservationType::C9A = NULL;
      ObservationType *ObservationType::C9B = NULL;
      ObservationType *ObservationType::C9C = NULL;
      ObservationType *ObservationType::C9X = NULL;
      ObservationType *ObservationType::CA = NULL;
      ObservationType *ObservationType::CB = NULL;
      ObservationType *ObservationType::CC = NULL;
      ObservationType *ObservationType::CD = NULL;
      ObservationType *ObservationType::D0 = NULL;
      ObservationType *ObservationType::D1 = NULL;
      ObservationType *ObservationType::D1A = NULL;
      ObservationType *ObservationType::D1B = NULL;
      ObservationType *ObservationType::D1C = NULL;
      ObservationType *ObservationType::D1D = NULL;
      ObservationType *ObservationType::D1E = NULL;
      ObservationType *ObservationType::D1I = NULL;
      ObservationType *ObservationType::D1L = NULL;
      ObservationType *ObservationType::D1M = NULL;
      ObservationType *ObservationType::D1N = NULL;
      ObservationType *ObservationType::D1P = NULL;
      ObservationType *ObservationType::D1S = NULL;
      ObservationType *ObservationType::D1W = NULL;
      ObservationType *ObservationType::D1X = NULL;
      ObservationType *ObservationType::D1Y = NULL;
      ObservationType *ObservationType::D1Z = NULL;
      ObservationType *ObservationType::D2 = NULL;
      ObservationType *ObservationType::D2C = NULL;
      ObservationType *ObservationType::D2D = NULL;
      ObservationType *ObservationType::D2I = NULL;
      ObservationType *ObservationType::D2L = NULL;
      ObservationType *ObservationType::D2M = NULL;
      ObservationType *ObservationType::D2N = NULL;
      ObservationType *ObservationType::D2P = NULL;
      ObservationType *ObservationType::D2Q = NULL;
      ObservationType *ObservationType::D2S = NULL;
      ObservationType *ObservationType::D2W = NULL;
      ObservationType *ObservationType::D2X = NULL;
      ObservationType *ObservationType::D2Y = NULL;
      ObservationType *ObservationType::D3I = NULL;
      ObservationType *ObservationType::D3Q = NULL;
      ObservationType *ObservationType::D3X = NULL;
      ObservationType *ObservationType::D4A = NULL;
      ObservationType *ObservationType::D4B = NULL;
      ObservationType *ObservationType::D4X = NULL;
      ObservationType *ObservationType::D5 = NULL;
      ObservationType *ObservationType::D5A = NULL;
      ObservationType *ObservationType::D5B = NULL;
      ObservationType *ObservationType::D5C = NULL;
      ObservationType *ObservationType::D5D = NULL;
      ObservationType *ObservationType::D5I = NULL;
      ObservationType *ObservationType::D5P = NULL;
      ObservationType *ObservationType::D5Q = NULL;
      ObservationType *ObservationType::D5X = NULL;
      ObservationType *ObservationType::D5Z = NULL;
      ObservationType *ObservationType::D6 = NULL;
      ObservationType *ObservationType::D6A = NULL;
      ObservationType *ObservationType::D6B = NULL;
      ObservationType *ObservationType::D6C = NULL;
      ObservationType *ObservationType::D6D = NULL;
      ObservationType *ObservationType::D6E = NULL;
      ObservationType *ObservationType::D6I = NULL;
      ObservationType *ObservationType::D6L = NULL;
      ObservationType *ObservationType::D6P = NULL;
      ObservationType *ObservationType::D6Q = NULL;
      ObservationType *ObservationType::D6S = NULL;
      ObservationType *ObservationType::D6X = NULL;
      ObservationType *ObservationType::D6Z = NULL;
      ObservationType *ObservationType::D7 = NULL;
      ObservationType *ObservationType::D7D = NULL;
      ObservationType *ObservationType::D7I = NULL;
      ObservationType *ObservationType::D7P = NULL;
      ObservationType *ObservationType::D7Q = NULL;
      ObservationType *ObservationType::D7X = NULL;
      ObservationType *ObservationType::D7Z = NULL;
      ObservationType *ObservationType::D8 = NULL;
      ObservationType *ObservationType::D8D = NULL;
      ObservationType *ObservationType::D8I = NULL;
      ObservationType *ObservationType::D8P = NULL;
      ObservationType *ObservationType::D8Q = NULL;
      ObservationType *ObservationType::D8X = NULL;
      ObservationType *ObservationType::D9A = NULL;
      ObservationType *ObservationType::D9B = NULL;
      ObservationType *ObservationType::D9C = NULL;
      ObservationType *ObservationType::D9X = NULL;
      ObservationType *ObservationType::DA = NULL;
      ObservationType *ObservationType::DB = NULL;
      ObservationType *ObservationType::DC = NULL;
      ObservationType *ObservationType::DD = NULL;
      ObservationType *ObservationType::L0 = NULL;
      ObservationType *ObservationType::L1 = NULL;
      ObservationType *ObservationType::L1A = NULL;
      ObservationType *ObservationType::L1B = NULL;
      ObservationType *ObservationType::L1C = NULL;
      ObservationType *ObservationType::L1D = NULL;
      ObservationType *ObservationType::L1E = NULL;
      ObservationType *ObservationType::L1I = NULL;
      ObservationType *ObservationType::L1L = NULL;
      ObservationType *ObservationType::L1M = NULL;
      ObservationType *ObservationType::L1N = NULL;
      ObservationType *ObservationType::L1P = NULL;
      ObservationType *ObservationType::L1S = NULL;
      ObservationType *ObservationType::L1W = NULL;
      ObservationType *ObservationType::L1X = NULL;
      ObservationType *ObservationType::L1Y = NULL;
      ObservationType *ObservationType::L1Z = NULL;
      ObservationType *ObservationType::L2 = NULL;
      ObservationType *ObservationType::L2C = NULL;
      ObservationType *ObservationType::L2D = NULL;
      ObservationType *ObservationType::L2I = NULL;
      ObservationType *ObservationType::L2L = NULL;
      ObservationType *ObservationType::L2M = NULL;
      ObservationType *ObservationType::L2N = NULL;
      ObservationType *ObservationType::L2P = NULL;
      ObservationType *ObservationType::L2Q = NULL;
      ObservationType *ObservationType::L2S = NULL;
      ObservationType *ObservationType::L2W = NULL;
      ObservationType *ObservationType::L2X = NULL;
      ObservationType *ObservationType::L2Y = NULL;
      ObservationType *ObservationType::L3I = NULL;
      ObservationType *ObservationType::L3Q = NULL;
      ObservationType *ObservationType::L3X = NULL;
      ObservationType *ObservationType::L4A = NULL;
      ObservationType *ObservationType::L4B = NULL;
      ObservationType *ObservationType::L4X = NULL;
      ObservationType *ObservationType::L5 = NULL;
      ObservationType *ObservationType::L5A = NULL;
      ObservationType *ObservationType::L5B = NULL;
      ObservationType *ObservationType::L5C = NULL;
      ObservationType *ObservationType::L5D = NULL;
      ObservationType *ObservationType::L5I = NULL;
      ObservationType *ObservationType::L5P = NULL;
      ObservationType *ObservationType::L5Q = NULL;
      ObservationType *ObservationType::L5X = NULL;
      ObservationType *ObservationType::L5Z = NULL;
      ObservationType *ObservationType::L6 = NULL;
      ObservationType *ObservationType::L6A = NULL;
      ObservationType *ObservationType::L6B = NULL;
      ObservationType *ObservationType::L6C = NULL;
      ObservationType *ObservationType::L6D = NULL;
      ObservationType *ObservationType::L6E = NULL;
      ObservationType *ObservationType::L6I = NULL;
      ObservationType *ObservationType::L6L = NULL;
      ObservationType *ObservationType::L6P = NULL;
      ObservationType *ObservationType::L6Q = NULL;
      ObservationType *ObservationType::L6S = NULL;
      ObservationType *ObservationType::L6X = NULL;
      ObservationType *ObservationType::L6Z = NULL;
      ObservationType *ObservationType::L7 = NULL;
      ObservationType *ObservationType::L7D = NULL;
      ObservationType *ObservationType::L7I = NULL;
      ObservationType *ObservationType::L7P = NULL;
      ObservationType *ObservationType::L7Q = NULL;
      ObservationType *ObservationType::L7X = NULL;
      ObservationType *ObservationType::L7Z = NULL;
      ObservationType *ObservationType::L8 = NULL;
      ObservationType *ObservationType::L8D = NULL;
      ObservationType *ObservationType::L8I = NULL;
      ObservationType *ObservationType::L8P = NULL;
      ObservationType *ObservationType::L8Q = NULL;
      ObservationType *ObservationType::L8X = NULL;
      ObservationType *ObservationType::L9A = NULL;
      ObservationType *ObservationType::L9B = NULL;
      ObservationType *ObservationType::L9C = NULL;
      ObservationType *ObservationType::L9X = NULL;
      ObservationType *ObservationType::LA = NULL;
      ObservationType *ObservationType::LB = NULL;
      ObservationType *ObservationType::LC = NULL;
      ObservationType *ObservationType::LD = NULL;
      ObservationType *ObservationType::P1 = NULL;
      ObservationType *ObservationType::P2 = NULL;
      ObservationType *ObservationType::S0 = NULL;
      ObservationType *ObservationType::S1 = NULL;
      ObservationType *ObservationType::S1A = NULL;
      ObservationType *ObservationType::S1B = NULL;
      ObservationType *ObservationType::S1C = NULL;
      ObservationType *ObservationType::S1D = NULL;
      ObservationType *ObservationType::S1E = NULL;
      ObservationType *ObservationType::S1I = NULL;
      ObservationType *ObservationType::S1L = NULL;
      ObservationType *ObservationType::S1M = NULL;
      ObservationType *ObservationType::S1N = NULL;
      ObservationType *ObservationType::S1P = NULL;
      ObservationType *ObservationType::S1S = NULL;
      ObservationType *ObservationType::S1W = NULL;
      ObservationType *ObservationType::S1X = NULL;
      ObservationType *ObservationType::S1Y = NULL;
      ObservationType *ObservationType::S1Z = NULL;
      ObservationType *ObservationType::S2 = NULL;
      ObservationType *ObservationType::S2C = NULL;
      ObservationType *ObservationType::S2D = NULL;
      ObservationType *ObservationType::S2I = NULL;
      ObservationType *ObservationType::S2L = NULL;
      ObservationType *ObservationType::S2M = NULL;
      ObservationType *ObservationType::S2N = NULL;
      ObservationType *ObservationType::S2P = NULL;
      ObservationType *ObservationType::S2Q = NULL;
      ObservationType *ObservationType::S2S = NULL;
      ObservationType *ObservationType::S2W = NULL;
      ObservationType *ObservationType::S2X = NULL;
      ObservationType *ObservationType::S2Y = NULL;
      ObservationType *ObservationType::S3I = NULL;
      ObservationType *ObservationType::S3Q = NULL;
      ObservationType *ObservationType::S3X = NULL;
      ObservationType *ObservationType::S4A = NULL;
      ObservationType *ObservationType::S4B = NULL;
      ObservationType *ObservationType::S4X = NULL;
      ObservationType *ObservationType::S5 = NULL;
      ObservationType *ObservationType::S5A = NULL;
      ObservationType *ObservationType::S5B = NULL;
      ObservationType *ObservationType::S5C = NULL;
      ObservationType *ObservationType::S5D = NULL;
      ObservationType *ObservationType::S5I = NULL;
      ObservationType *ObservationType::S5P = NULL;
      ObservationType *ObservationType::S5Q = NULL;
      ObservationType *ObservationType::S5X = NULL;
      ObservationType *ObservationType::S5Z = NULL;
      ObservationType *ObservationType::S6 = NULL;
      ObservationType *ObservationType::S6A = NULL;
      ObservationType *ObservationType::S6B = NULL;
      ObservationType *ObservationType::S6C = NULL;
      ObservationType *ObservationType::S6D = NULL;
      ObservationType *ObservationType::S6E = NULL;
      ObservationType *ObservationType::S6I = NULL;
      ObservationType *ObservationType::S6L = NULL;
      ObservationType *ObservationType::S6P = NULL;
      ObservationType *ObservationType::S6Q = NULL;
      ObservationType *ObservationType::S6S = NULL;
      ObservationType *ObservationType::S6X = NULL;
      ObservationType *ObservationType::S6Z = NULL;
      ObservationType *ObservationType::S7 = NULL;
      ObservationType *ObservationType::S7D = NULL;
      ObservationType *ObservationType::S7I = NULL;
      ObservationType *ObservationType::S7P = NULL;
      ObservationType *ObservationType::S7Q = NULL;
      ObservationType *ObservationType::S7X = NULL;
      ObservationType *ObservationType::S7Z = NULL;
      ObservationType *ObservationType::S8 = NULL;
      ObservationType *ObservationType::S8D = NULL;
      ObservationType *ObservationType::S8I = NULL;
      ObservationType *ObservationType::S8P = NULL;
      ObservationType *ObservationType::S8Q = NULL;
      ObservationType *ObservationType::S8X = NULL;
      ObservationType *ObservationType::S9A = NULL;
      ObservationType *ObservationType::S9B = NULL;
      ObservationType *ObservationType::S9C = NULL;
      ObservationType *ObservationType::S9X = NULL;
      ObservationType *ObservationType::SA = NULL;
      ObservationType *ObservationType::SB = NULL;
      ObservationType *ObservationType::SC = NULL;
      ObservationType *ObservationType::SD = NULL;

      jclass ObservationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFrequency_08ebb2e5532551f9] = env->getMethodID(cls, "getFrequency", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_getMeasurementType_b9f942cb72c4c59a] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_getSignalCode_84919806000a2fe9] = env->getMethodID(cls, "getSignalCode", "()Lorg/orekit/gnss/SignalCode;");
          mids$[mid_valueOf_d7f884d006d0a7e9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationType;");
          mids$[mid_values_4f074092c8653291] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          C0 = new ObservationType(env->getStaticObjectField(cls, "C0", "Lorg/orekit/gnss/ObservationType;"));
          C1 = new ObservationType(env->getStaticObjectField(cls, "C1", "Lorg/orekit/gnss/ObservationType;"));
          C1A = new ObservationType(env->getStaticObjectField(cls, "C1A", "Lorg/orekit/gnss/ObservationType;"));
          C1B = new ObservationType(env->getStaticObjectField(cls, "C1B", "Lorg/orekit/gnss/ObservationType;"));
          C1C = new ObservationType(env->getStaticObjectField(cls, "C1C", "Lorg/orekit/gnss/ObservationType;"));
          C1D = new ObservationType(env->getStaticObjectField(cls, "C1D", "Lorg/orekit/gnss/ObservationType;"));
          C1E = new ObservationType(env->getStaticObjectField(cls, "C1E", "Lorg/orekit/gnss/ObservationType;"));
          C1I = new ObservationType(env->getStaticObjectField(cls, "C1I", "Lorg/orekit/gnss/ObservationType;"));
          C1L = new ObservationType(env->getStaticObjectField(cls, "C1L", "Lorg/orekit/gnss/ObservationType;"));
          C1M = new ObservationType(env->getStaticObjectField(cls, "C1M", "Lorg/orekit/gnss/ObservationType;"));
          C1P = new ObservationType(env->getStaticObjectField(cls, "C1P", "Lorg/orekit/gnss/ObservationType;"));
          C1Q = new ObservationType(env->getStaticObjectField(cls, "C1Q", "Lorg/orekit/gnss/ObservationType;"));
          C1S = new ObservationType(env->getStaticObjectField(cls, "C1S", "Lorg/orekit/gnss/ObservationType;"));
          C1W = new ObservationType(env->getStaticObjectField(cls, "C1W", "Lorg/orekit/gnss/ObservationType;"));
          C1X = new ObservationType(env->getStaticObjectField(cls, "C1X", "Lorg/orekit/gnss/ObservationType;"));
          C1Y = new ObservationType(env->getStaticObjectField(cls, "C1Y", "Lorg/orekit/gnss/ObservationType;"));
          C1Z = new ObservationType(env->getStaticObjectField(cls, "C1Z", "Lorg/orekit/gnss/ObservationType;"));
          C2 = new ObservationType(env->getStaticObjectField(cls, "C2", "Lorg/orekit/gnss/ObservationType;"));
          C2C = new ObservationType(env->getStaticObjectField(cls, "C2C", "Lorg/orekit/gnss/ObservationType;"));
          C2D = new ObservationType(env->getStaticObjectField(cls, "C2D", "Lorg/orekit/gnss/ObservationType;"));
          C2I = new ObservationType(env->getStaticObjectField(cls, "C2I", "Lorg/orekit/gnss/ObservationType;"));
          C2L = new ObservationType(env->getStaticObjectField(cls, "C2L", "Lorg/orekit/gnss/ObservationType;"));
          C2M = new ObservationType(env->getStaticObjectField(cls, "C2M", "Lorg/orekit/gnss/ObservationType;"));
          C2P = new ObservationType(env->getStaticObjectField(cls, "C2P", "Lorg/orekit/gnss/ObservationType;"));
          C2Q = new ObservationType(env->getStaticObjectField(cls, "C2Q", "Lorg/orekit/gnss/ObservationType;"));
          C2S = new ObservationType(env->getStaticObjectField(cls, "C2S", "Lorg/orekit/gnss/ObservationType;"));
          C2W = new ObservationType(env->getStaticObjectField(cls, "C2W", "Lorg/orekit/gnss/ObservationType;"));
          C2X = new ObservationType(env->getStaticObjectField(cls, "C2X", "Lorg/orekit/gnss/ObservationType;"));
          C2Y = new ObservationType(env->getStaticObjectField(cls, "C2Y", "Lorg/orekit/gnss/ObservationType;"));
          C3I = new ObservationType(env->getStaticObjectField(cls, "C3I", "Lorg/orekit/gnss/ObservationType;"));
          C3Q = new ObservationType(env->getStaticObjectField(cls, "C3Q", "Lorg/orekit/gnss/ObservationType;"));
          C3X = new ObservationType(env->getStaticObjectField(cls, "C3X", "Lorg/orekit/gnss/ObservationType;"));
          C4A = new ObservationType(env->getStaticObjectField(cls, "C4A", "Lorg/orekit/gnss/ObservationType;"));
          C4B = new ObservationType(env->getStaticObjectField(cls, "C4B", "Lorg/orekit/gnss/ObservationType;"));
          C4X = new ObservationType(env->getStaticObjectField(cls, "C4X", "Lorg/orekit/gnss/ObservationType;"));
          C5 = new ObservationType(env->getStaticObjectField(cls, "C5", "Lorg/orekit/gnss/ObservationType;"));
          C5A = new ObservationType(env->getStaticObjectField(cls, "C5A", "Lorg/orekit/gnss/ObservationType;"));
          C5B = new ObservationType(env->getStaticObjectField(cls, "C5B", "Lorg/orekit/gnss/ObservationType;"));
          C5C = new ObservationType(env->getStaticObjectField(cls, "C5C", "Lorg/orekit/gnss/ObservationType;"));
          C5D = new ObservationType(env->getStaticObjectField(cls, "C5D", "Lorg/orekit/gnss/ObservationType;"));
          C5I = new ObservationType(env->getStaticObjectField(cls, "C5I", "Lorg/orekit/gnss/ObservationType;"));
          C5P = new ObservationType(env->getStaticObjectField(cls, "C5P", "Lorg/orekit/gnss/ObservationType;"));
          C5Q = new ObservationType(env->getStaticObjectField(cls, "C5Q", "Lorg/orekit/gnss/ObservationType;"));
          C5X = new ObservationType(env->getStaticObjectField(cls, "C5X", "Lorg/orekit/gnss/ObservationType;"));
          C5Z = new ObservationType(env->getStaticObjectField(cls, "C5Z", "Lorg/orekit/gnss/ObservationType;"));
          C6 = new ObservationType(env->getStaticObjectField(cls, "C6", "Lorg/orekit/gnss/ObservationType;"));
          C6A = new ObservationType(env->getStaticObjectField(cls, "C6A", "Lorg/orekit/gnss/ObservationType;"));
          C6B = new ObservationType(env->getStaticObjectField(cls, "C6B", "Lorg/orekit/gnss/ObservationType;"));
          C6C = new ObservationType(env->getStaticObjectField(cls, "C6C", "Lorg/orekit/gnss/ObservationType;"));
          C6D = new ObservationType(env->getStaticObjectField(cls, "C6D", "Lorg/orekit/gnss/ObservationType;"));
          C6E = new ObservationType(env->getStaticObjectField(cls, "C6E", "Lorg/orekit/gnss/ObservationType;"));
          C6I = new ObservationType(env->getStaticObjectField(cls, "C6I", "Lorg/orekit/gnss/ObservationType;"));
          C6L = new ObservationType(env->getStaticObjectField(cls, "C6L", "Lorg/orekit/gnss/ObservationType;"));
          C6P = new ObservationType(env->getStaticObjectField(cls, "C6P", "Lorg/orekit/gnss/ObservationType;"));
          C6Q = new ObservationType(env->getStaticObjectField(cls, "C6Q", "Lorg/orekit/gnss/ObservationType;"));
          C6S = new ObservationType(env->getStaticObjectField(cls, "C6S", "Lorg/orekit/gnss/ObservationType;"));
          C6X = new ObservationType(env->getStaticObjectField(cls, "C6X", "Lorg/orekit/gnss/ObservationType;"));
          C6Z = new ObservationType(env->getStaticObjectField(cls, "C6Z", "Lorg/orekit/gnss/ObservationType;"));
          C7 = new ObservationType(env->getStaticObjectField(cls, "C7", "Lorg/orekit/gnss/ObservationType;"));
          C7D = new ObservationType(env->getStaticObjectField(cls, "C7D", "Lorg/orekit/gnss/ObservationType;"));
          C7I = new ObservationType(env->getStaticObjectField(cls, "C7I", "Lorg/orekit/gnss/ObservationType;"));
          C7P = new ObservationType(env->getStaticObjectField(cls, "C7P", "Lorg/orekit/gnss/ObservationType;"));
          C7Q = new ObservationType(env->getStaticObjectField(cls, "C7Q", "Lorg/orekit/gnss/ObservationType;"));
          C7X = new ObservationType(env->getStaticObjectField(cls, "C7X", "Lorg/orekit/gnss/ObservationType;"));
          C7Z = new ObservationType(env->getStaticObjectField(cls, "C7Z", "Lorg/orekit/gnss/ObservationType;"));
          C8 = new ObservationType(env->getStaticObjectField(cls, "C8", "Lorg/orekit/gnss/ObservationType;"));
          C8D = new ObservationType(env->getStaticObjectField(cls, "C8D", "Lorg/orekit/gnss/ObservationType;"));
          C8I = new ObservationType(env->getStaticObjectField(cls, "C8I", "Lorg/orekit/gnss/ObservationType;"));
          C8P = new ObservationType(env->getStaticObjectField(cls, "C8P", "Lorg/orekit/gnss/ObservationType;"));
          C8Q = new ObservationType(env->getStaticObjectField(cls, "C8Q", "Lorg/orekit/gnss/ObservationType;"));
          C8X = new ObservationType(env->getStaticObjectField(cls, "C8X", "Lorg/orekit/gnss/ObservationType;"));
          C9A = new ObservationType(env->getStaticObjectField(cls, "C9A", "Lorg/orekit/gnss/ObservationType;"));
          C9B = new ObservationType(env->getStaticObjectField(cls, "C9B", "Lorg/orekit/gnss/ObservationType;"));
          C9C = new ObservationType(env->getStaticObjectField(cls, "C9C", "Lorg/orekit/gnss/ObservationType;"));
          C9X = new ObservationType(env->getStaticObjectField(cls, "C9X", "Lorg/orekit/gnss/ObservationType;"));
          CA = new ObservationType(env->getStaticObjectField(cls, "CA", "Lorg/orekit/gnss/ObservationType;"));
          CB = new ObservationType(env->getStaticObjectField(cls, "CB", "Lorg/orekit/gnss/ObservationType;"));
          CC = new ObservationType(env->getStaticObjectField(cls, "CC", "Lorg/orekit/gnss/ObservationType;"));
          CD = new ObservationType(env->getStaticObjectField(cls, "CD", "Lorg/orekit/gnss/ObservationType;"));
          D0 = new ObservationType(env->getStaticObjectField(cls, "D0", "Lorg/orekit/gnss/ObservationType;"));
          D1 = new ObservationType(env->getStaticObjectField(cls, "D1", "Lorg/orekit/gnss/ObservationType;"));
          D1A = new ObservationType(env->getStaticObjectField(cls, "D1A", "Lorg/orekit/gnss/ObservationType;"));
          D1B = new ObservationType(env->getStaticObjectField(cls, "D1B", "Lorg/orekit/gnss/ObservationType;"));
          D1C = new ObservationType(env->getStaticObjectField(cls, "D1C", "Lorg/orekit/gnss/ObservationType;"));
          D1D = new ObservationType(env->getStaticObjectField(cls, "D1D", "Lorg/orekit/gnss/ObservationType;"));
          D1E = new ObservationType(env->getStaticObjectField(cls, "D1E", "Lorg/orekit/gnss/ObservationType;"));
          D1I = new ObservationType(env->getStaticObjectField(cls, "D1I", "Lorg/orekit/gnss/ObservationType;"));
          D1L = new ObservationType(env->getStaticObjectField(cls, "D1L", "Lorg/orekit/gnss/ObservationType;"));
          D1M = new ObservationType(env->getStaticObjectField(cls, "D1M", "Lorg/orekit/gnss/ObservationType;"));
          D1N = new ObservationType(env->getStaticObjectField(cls, "D1N", "Lorg/orekit/gnss/ObservationType;"));
          D1P = new ObservationType(env->getStaticObjectField(cls, "D1P", "Lorg/orekit/gnss/ObservationType;"));
          D1S = new ObservationType(env->getStaticObjectField(cls, "D1S", "Lorg/orekit/gnss/ObservationType;"));
          D1W = new ObservationType(env->getStaticObjectField(cls, "D1W", "Lorg/orekit/gnss/ObservationType;"));
          D1X = new ObservationType(env->getStaticObjectField(cls, "D1X", "Lorg/orekit/gnss/ObservationType;"));
          D1Y = new ObservationType(env->getStaticObjectField(cls, "D1Y", "Lorg/orekit/gnss/ObservationType;"));
          D1Z = new ObservationType(env->getStaticObjectField(cls, "D1Z", "Lorg/orekit/gnss/ObservationType;"));
          D2 = new ObservationType(env->getStaticObjectField(cls, "D2", "Lorg/orekit/gnss/ObservationType;"));
          D2C = new ObservationType(env->getStaticObjectField(cls, "D2C", "Lorg/orekit/gnss/ObservationType;"));
          D2D = new ObservationType(env->getStaticObjectField(cls, "D2D", "Lorg/orekit/gnss/ObservationType;"));
          D2I = new ObservationType(env->getStaticObjectField(cls, "D2I", "Lorg/orekit/gnss/ObservationType;"));
          D2L = new ObservationType(env->getStaticObjectField(cls, "D2L", "Lorg/orekit/gnss/ObservationType;"));
          D2M = new ObservationType(env->getStaticObjectField(cls, "D2M", "Lorg/orekit/gnss/ObservationType;"));
          D2N = new ObservationType(env->getStaticObjectField(cls, "D2N", "Lorg/orekit/gnss/ObservationType;"));
          D2P = new ObservationType(env->getStaticObjectField(cls, "D2P", "Lorg/orekit/gnss/ObservationType;"));
          D2Q = new ObservationType(env->getStaticObjectField(cls, "D2Q", "Lorg/orekit/gnss/ObservationType;"));
          D2S = new ObservationType(env->getStaticObjectField(cls, "D2S", "Lorg/orekit/gnss/ObservationType;"));
          D2W = new ObservationType(env->getStaticObjectField(cls, "D2W", "Lorg/orekit/gnss/ObservationType;"));
          D2X = new ObservationType(env->getStaticObjectField(cls, "D2X", "Lorg/orekit/gnss/ObservationType;"));
          D2Y = new ObservationType(env->getStaticObjectField(cls, "D2Y", "Lorg/orekit/gnss/ObservationType;"));
          D3I = new ObservationType(env->getStaticObjectField(cls, "D3I", "Lorg/orekit/gnss/ObservationType;"));
          D3Q = new ObservationType(env->getStaticObjectField(cls, "D3Q", "Lorg/orekit/gnss/ObservationType;"));
          D3X = new ObservationType(env->getStaticObjectField(cls, "D3X", "Lorg/orekit/gnss/ObservationType;"));
          D4A = new ObservationType(env->getStaticObjectField(cls, "D4A", "Lorg/orekit/gnss/ObservationType;"));
          D4B = new ObservationType(env->getStaticObjectField(cls, "D4B", "Lorg/orekit/gnss/ObservationType;"));
          D4X = new ObservationType(env->getStaticObjectField(cls, "D4X", "Lorg/orekit/gnss/ObservationType;"));
          D5 = new ObservationType(env->getStaticObjectField(cls, "D5", "Lorg/orekit/gnss/ObservationType;"));
          D5A = new ObservationType(env->getStaticObjectField(cls, "D5A", "Lorg/orekit/gnss/ObservationType;"));
          D5B = new ObservationType(env->getStaticObjectField(cls, "D5B", "Lorg/orekit/gnss/ObservationType;"));
          D5C = new ObservationType(env->getStaticObjectField(cls, "D5C", "Lorg/orekit/gnss/ObservationType;"));
          D5D = new ObservationType(env->getStaticObjectField(cls, "D5D", "Lorg/orekit/gnss/ObservationType;"));
          D5I = new ObservationType(env->getStaticObjectField(cls, "D5I", "Lorg/orekit/gnss/ObservationType;"));
          D5P = new ObservationType(env->getStaticObjectField(cls, "D5P", "Lorg/orekit/gnss/ObservationType;"));
          D5Q = new ObservationType(env->getStaticObjectField(cls, "D5Q", "Lorg/orekit/gnss/ObservationType;"));
          D5X = new ObservationType(env->getStaticObjectField(cls, "D5X", "Lorg/orekit/gnss/ObservationType;"));
          D5Z = new ObservationType(env->getStaticObjectField(cls, "D5Z", "Lorg/orekit/gnss/ObservationType;"));
          D6 = new ObservationType(env->getStaticObjectField(cls, "D6", "Lorg/orekit/gnss/ObservationType;"));
          D6A = new ObservationType(env->getStaticObjectField(cls, "D6A", "Lorg/orekit/gnss/ObservationType;"));
          D6B = new ObservationType(env->getStaticObjectField(cls, "D6B", "Lorg/orekit/gnss/ObservationType;"));
          D6C = new ObservationType(env->getStaticObjectField(cls, "D6C", "Lorg/orekit/gnss/ObservationType;"));
          D6D = new ObservationType(env->getStaticObjectField(cls, "D6D", "Lorg/orekit/gnss/ObservationType;"));
          D6E = new ObservationType(env->getStaticObjectField(cls, "D6E", "Lorg/orekit/gnss/ObservationType;"));
          D6I = new ObservationType(env->getStaticObjectField(cls, "D6I", "Lorg/orekit/gnss/ObservationType;"));
          D6L = new ObservationType(env->getStaticObjectField(cls, "D6L", "Lorg/orekit/gnss/ObservationType;"));
          D6P = new ObservationType(env->getStaticObjectField(cls, "D6P", "Lorg/orekit/gnss/ObservationType;"));
          D6Q = new ObservationType(env->getStaticObjectField(cls, "D6Q", "Lorg/orekit/gnss/ObservationType;"));
          D6S = new ObservationType(env->getStaticObjectField(cls, "D6S", "Lorg/orekit/gnss/ObservationType;"));
          D6X = new ObservationType(env->getStaticObjectField(cls, "D6X", "Lorg/orekit/gnss/ObservationType;"));
          D6Z = new ObservationType(env->getStaticObjectField(cls, "D6Z", "Lorg/orekit/gnss/ObservationType;"));
          D7 = new ObservationType(env->getStaticObjectField(cls, "D7", "Lorg/orekit/gnss/ObservationType;"));
          D7D = new ObservationType(env->getStaticObjectField(cls, "D7D", "Lorg/orekit/gnss/ObservationType;"));
          D7I = new ObservationType(env->getStaticObjectField(cls, "D7I", "Lorg/orekit/gnss/ObservationType;"));
          D7P = new ObservationType(env->getStaticObjectField(cls, "D7P", "Lorg/orekit/gnss/ObservationType;"));
          D7Q = new ObservationType(env->getStaticObjectField(cls, "D7Q", "Lorg/orekit/gnss/ObservationType;"));
          D7X = new ObservationType(env->getStaticObjectField(cls, "D7X", "Lorg/orekit/gnss/ObservationType;"));
          D7Z = new ObservationType(env->getStaticObjectField(cls, "D7Z", "Lorg/orekit/gnss/ObservationType;"));
          D8 = new ObservationType(env->getStaticObjectField(cls, "D8", "Lorg/orekit/gnss/ObservationType;"));
          D8D = new ObservationType(env->getStaticObjectField(cls, "D8D", "Lorg/orekit/gnss/ObservationType;"));
          D8I = new ObservationType(env->getStaticObjectField(cls, "D8I", "Lorg/orekit/gnss/ObservationType;"));
          D8P = new ObservationType(env->getStaticObjectField(cls, "D8P", "Lorg/orekit/gnss/ObservationType;"));
          D8Q = new ObservationType(env->getStaticObjectField(cls, "D8Q", "Lorg/orekit/gnss/ObservationType;"));
          D8X = new ObservationType(env->getStaticObjectField(cls, "D8X", "Lorg/orekit/gnss/ObservationType;"));
          D9A = new ObservationType(env->getStaticObjectField(cls, "D9A", "Lorg/orekit/gnss/ObservationType;"));
          D9B = new ObservationType(env->getStaticObjectField(cls, "D9B", "Lorg/orekit/gnss/ObservationType;"));
          D9C = new ObservationType(env->getStaticObjectField(cls, "D9C", "Lorg/orekit/gnss/ObservationType;"));
          D9X = new ObservationType(env->getStaticObjectField(cls, "D9X", "Lorg/orekit/gnss/ObservationType;"));
          DA = new ObservationType(env->getStaticObjectField(cls, "DA", "Lorg/orekit/gnss/ObservationType;"));
          DB = new ObservationType(env->getStaticObjectField(cls, "DB", "Lorg/orekit/gnss/ObservationType;"));
          DC = new ObservationType(env->getStaticObjectField(cls, "DC", "Lorg/orekit/gnss/ObservationType;"));
          DD = new ObservationType(env->getStaticObjectField(cls, "DD", "Lorg/orekit/gnss/ObservationType;"));
          L0 = new ObservationType(env->getStaticObjectField(cls, "L0", "Lorg/orekit/gnss/ObservationType;"));
          L1 = new ObservationType(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/ObservationType;"));
          L1A = new ObservationType(env->getStaticObjectField(cls, "L1A", "Lorg/orekit/gnss/ObservationType;"));
          L1B = new ObservationType(env->getStaticObjectField(cls, "L1B", "Lorg/orekit/gnss/ObservationType;"));
          L1C = new ObservationType(env->getStaticObjectField(cls, "L1C", "Lorg/orekit/gnss/ObservationType;"));
          L1D = new ObservationType(env->getStaticObjectField(cls, "L1D", "Lorg/orekit/gnss/ObservationType;"));
          L1E = new ObservationType(env->getStaticObjectField(cls, "L1E", "Lorg/orekit/gnss/ObservationType;"));
          L1I = new ObservationType(env->getStaticObjectField(cls, "L1I", "Lorg/orekit/gnss/ObservationType;"));
          L1L = new ObservationType(env->getStaticObjectField(cls, "L1L", "Lorg/orekit/gnss/ObservationType;"));
          L1M = new ObservationType(env->getStaticObjectField(cls, "L1M", "Lorg/orekit/gnss/ObservationType;"));
          L1N = new ObservationType(env->getStaticObjectField(cls, "L1N", "Lorg/orekit/gnss/ObservationType;"));
          L1P = new ObservationType(env->getStaticObjectField(cls, "L1P", "Lorg/orekit/gnss/ObservationType;"));
          L1S = new ObservationType(env->getStaticObjectField(cls, "L1S", "Lorg/orekit/gnss/ObservationType;"));
          L1W = new ObservationType(env->getStaticObjectField(cls, "L1W", "Lorg/orekit/gnss/ObservationType;"));
          L1X = new ObservationType(env->getStaticObjectField(cls, "L1X", "Lorg/orekit/gnss/ObservationType;"));
          L1Y = new ObservationType(env->getStaticObjectField(cls, "L1Y", "Lorg/orekit/gnss/ObservationType;"));
          L1Z = new ObservationType(env->getStaticObjectField(cls, "L1Z", "Lorg/orekit/gnss/ObservationType;"));
          L2 = new ObservationType(env->getStaticObjectField(cls, "L2", "Lorg/orekit/gnss/ObservationType;"));
          L2C = new ObservationType(env->getStaticObjectField(cls, "L2C", "Lorg/orekit/gnss/ObservationType;"));
          L2D = new ObservationType(env->getStaticObjectField(cls, "L2D", "Lorg/orekit/gnss/ObservationType;"));
          L2I = new ObservationType(env->getStaticObjectField(cls, "L2I", "Lorg/orekit/gnss/ObservationType;"));
          L2L = new ObservationType(env->getStaticObjectField(cls, "L2L", "Lorg/orekit/gnss/ObservationType;"));
          L2M = new ObservationType(env->getStaticObjectField(cls, "L2M", "Lorg/orekit/gnss/ObservationType;"));
          L2N = new ObservationType(env->getStaticObjectField(cls, "L2N", "Lorg/orekit/gnss/ObservationType;"));
          L2P = new ObservationType(env->getStaticObjectField(cls, "L2P", "Lorg/orekit/gnss/ObservationType;"));
          L2Q = new ObservationType(env->getStaticObjectField(cls, "L2Q", "Lorg/orekit/gnss/ObservationType;"));
          L2S = new ObservationType(env->getStaticObjectField(cls, "L2S", "Lorg/orekit/gnss/ObservationType;"));
          L2W = new ObservationType(env->getStaticObjectField(cls, "L2W", "Lorg/orekit/gnss/ObservationType;"));
          L2X = new ObservationType(env->getStaticObjectField(cls, "L2X", "Lorg/orekit/gnss/ObservationType;"));
          L2Y = new ObservationType(env->getStaticObjectField(cls, "L2Y", "Lorg/orekit/gnss/ObservationType;"));
          L3I = new ObservationType(env->getStaticObjectField(cls, "L3I", "Lorg/orekit/gnss/ObservationType;"));
          L3Q = new ObservationType(env->getStaticObjectField(cls, "L3Q", "Lorg/orekit/gnss/ObservationType;"));
          L3X = new ObservationType(env->getStaticObjectField(cls, "L3X", "Lorg/orekit/gnss/ObservationType;"));
          L4A = new ObservationType(env->getStaticObjectField(cls, "L4A", "Lorg/orekit/gnss/ObservationType;"));
          L4B = new ObservationType(env->getStaticObjectField(cls, "L4B", "Lorg/orekit/gnss/ObservationType;"));
          L4X = new ObservationType(env->getStaticObjectField(cls, "L4X", "Lorg/orekit/gnss/ObservationType;"));
          L5 = new ObservationType(env->getStaticObjectField(cls, "L5", "Lorg/orekit/gnss/ObservationType;"));
          L5A = new ObservationType(env->getStaticObjectField(cls, "L5A", "Lorg/orekit/gnss/ObservationType;"));
          L5B = new ObservationType(env->getStaticObjectField(cls, "L5B", "Lorg/orekit/gnss/ObservationType;"));
          L5C = new ObservationType(env->getStaticObjectField(cls, "L5C", "Lorg/orekit/gnss/ObservationType;"));
          L5D = new ObservationType(env->getStaticObjectField(cls, "L5D", "Lorg/orekit/gnss/ObservationType;"));
          L5I = new ObservationType(env->getStaticObjectField(cls, "L5I", "Lorg/orekit/gnss/ObservationType;"));
          L5P = new ObservationType(env->getStaticObjectField(cls, "L5P", "Lorg/orekit/gnss/ObservationType;"));
          L5Q = new ObservationType(env->getStaticObjectField(cls, "L5Q", "Lorg/orekit/gnss/ObservationType;"));
          L5X = new ObservationType(env->getStaticObjectField(cls, "L5X", "Lorg/orekit/gnss/ObservationType;"));
          L5Z = new ObservationType(env->getStaticObjectField(cls, "L5Z", "Lorg/orekit/gnss/ObservationType;"));
          L6 = new ObservationType(env->getStaticObjectField(cls, "L6", "Lorg/orekit/gnss/ObservationType;"));
          L6A = new ObservationType(env->getStaticObjectField(cls, "L6A", "Lorg/orekit/gnss/ObservationType;"));
          L6B = new ObservationType(env->getStaticObjectField(cls, "L6B", "Lorg/orekit/gnss/ObservationType;"));
          L6C = new ObservationType(env->getStaticObjectField(cls, "L6C", "Lorg/orekit/gnss/ObservationType;"));
          L6D = new ObservationType(env->getStaticObjectField(cls, "L6D", "Lorg/orekit/gnss/ObservationType;"));
          L6E = new ObservationType(env->getStaticObjectField(cls, "L6E", "Lorg/orekit/gnss/ObservationType;"));
          L6I = new ObservationType(env->getStaticObjectField(cls, "L6I", "Lorg/orekit/gnss/ObservationType;"));
          L6L = new ObservationType(env->getStaticObjectField(cls, "L6L", "Lorg/orekit/gnss/ObservationType;"));
          L6P = new ObservationType(env->getStaticObjectField(cls, "L6P", "Lorg/orekit/gnss/ObservationType;"));
          L6Q = new ObservationType(env->getStaticObjectField(cls, "L6Q", "Lorg/orekit/gnss/ObservationType;"));
          L6S = new ObservationType(env->getStaticObjectField(cls, "L6S", "Lorg/orekit/gnss/ObservationType;"));
          L6X = new ObservationType(env->getStaticObjectField(cls, "L6X", "Lorg/orekit/gnss/ObservationType;"));
          L6Z = new ObservationType(env->getStaticObjectField(cls, "L6Z", "Lorg/orekit/gnss/ObservationType;"));
          L7 = new ObservationType(env->getStaticObjectField(cls, "L7", "Lorg/orekit/gnss/ObservationType;"));
          L7D = new ObservationType(env->getStaticObjectField(cls, "L7D", "Lorg/orekit/gnss/ObservationType;"));
          L7I = new ObservationType(env->getStaticObjectField(cls, "L7I", "Lorg/orekit/gnss/ObservationType;"));
          L7P = new ObservationType(env->getStaticObjectField(cls, "L7P", "Lorg/orekit/gnss/ObservationType;"));
          L7Q = new ObservationType(env->getStaticObjectField(cls, "L7Q", "Lorg/orekit/gnss/ObservationType;"));
          L7X = new ObservationType(env->getStaticObjectField(cls, "L7X", "Lorg/orekit/gnss/ObservationType;"));
          L7Z = new ObservationType(env->getStaticObjectField(cls, "L7Z", "Lorg/orekit/gnss/ObservationType;"));
          L8 = new ObservationType(env->getStaticObjectField(cls, "L8", "Lorg/orekit/gnss/ObservationType;"));
          L8D = new ObservationType(env->getStaticObjectField(cls, "L8D", "Lorg/orekit/gnss/ObservationType;"));
          L8I = new ObservationType(env->getStaticObjectField(cls, "L8I", "Lorg/orekit/gnss/ObservationType;"));
          L8P = new ObservationType(env->getStaticObjectField(cls, "L8P", "Lorg/orekit/gnss/ObservationType;"));
          L8Q = new ObservationType(env->getStaticObjectField(cls, "L8Q", "Lorg/orekit/gnss/ObservationType;"));
          L8X = new ObservationType(env->getStaticObjectField(cls, "L8X", "Lorg/orekit/gnss/ObservationType;"));
          L9A = new ObservationType(env->getStaticObjectField(cls, "L9A", "Lorg/orekit/gnss/ObservationType;"));
          L9B = new ObservationType(env->getStaticObjectField(cls, "L9B", "Lorg/orekit/gnss/ObservationType;"));
          L9C = new ObservationType(env->getStaticObjectField(cls, "L9C", "Lorg/orekit/gnss/ObservationType;"));
          L9X = new ObservationType(env->getStaticObjectField(cls, "L9X", "Lorg/orekit/gnss/ObservationType;"));
          LA = new ObservationType(env->getStaticObjectField(cls, "LA", "Lorg/orekit/gnss/ObservationType;"));
          LB = new ObservationType(env->getStaticObjectField(cls, "LB", "Lorg/orekit/gnss/ObservationType;"));
          LC = new ObservationType(env->getStaticObjectField(cls, "LC", "Lorg/orekit/gnss/ObservationType;"));
          LD = new ObservationType(env->getStaticObjectField(cls, "LD", "Lorg/orekit/gnss/ObservationType;"));
          P1 = new ObservationType(env->getStaticObjectField(cls, "P1", "Lorg/orekit/gnss/ObservationType;"));
          P2 = new ObservationType(env->getStaticObjectField(cls, "P2", "Lorg/orekit/gnss/ObservationType;"));
          S0 = new ObservationType(env->getStaticObjectField(cls, "S0", "Lorg/orekit/gnss/ObservationType;"));
          S1 = new ObservationType(env->getStaticObjectField(cls, "S1", "Lorg/orekit/gnss/ObservationType;"));
          S1A = new ObservationType(env->getStaticObjectField(cls, "S1A", "Lorg/orekit/gnss/ObservationType;"));
          S1B = new ObservationType(env->getStaticObjectField(cls, "S1B", "Lorg/orekit/gnss/ObservationType;"));
          S1C = new ObservationType(env->getStaticObjectField(cls, "S1C", "Lorg/orekit/gnss/ObservationType;"));
          S1D = new ObservationType(env->getStaticObjectField(cls, "S1D", "Lorg/orekit/gnss/ObservationType;"));
          S1E = new ObservationType(env->getStaticObjectField(cls, "S1E", "Lorg/orekit/gnss/ObservationType;"));
          S1I = new ObservationType(env->getStaticObjectField(cls, "S1I", "Lorg/orekit/gnss/ObservationType;"));
          S1L = new ObservationType(env->getStaticObjectField(cls, "S1L", "Lorg/orekit/gnss/ObservationType;"));
          S1M = new ObservationType(env->getStaticObjectField(cls, "S1M", "Lorg/orekit/gnss/ObservationType;"));
          S1N = new ObservationType(env->getStaticObjectField(cls, "S1N", "Lorg/orekit/gnss/ObservationType;"));
          S1P = new ObservationType(env->getStaticObjectField(cls, "S1P", "Lorg/orekit/gnss/ObservationType;"));
          S1S = new ObservationType(env->getStaticObjectField(cls, "S1S", "Lorg/orekit/gnss/ObservationType;"));
          S1W = new ObservationType(env->getStaticObjectField(cls, "S1W", "Lorg/orekit/gnss/ObservationType;"));
          S1X = new ObservationType(env->getStaticObjectField(cls, "S1X", "Lorg/orekit/gnss/ObservationType;"));
          S1Y = new ObservationType(env->getStaticObjectField(cls, "S1Y", "Lorg/orekit/gnss/ObservationType;"));
          S1Z = new ObservationType(env->getStaticObjectField(cls, "S1Z", "Lorg/orekit/gnss/ObservationType;"));
          S2 = new ObservationType(env->getStaticObjectField(cls, "S2", "Lorg/orekit/gnss/ObservationType;"));
          S2C = new ObservationType(env->getStaticObjectField(cls, "S2C", "Lorg/orekit/gnss/ObservationType;"));
          S2D = new ObservationType(env->getStaticObjectField(cls, "S2D", "Lorg/orekit/gnss/ObservationType;"));
          S2I = new ObservationType(env->getStaticObjectField(cls, "S2I", "Lorg/orekit/gnss/ObservationType;"));
          S2L = new ObservationType(env->getStaticObjectField(cls, "S2L", "Lorg/orekit/gnss/ObservationType;"));
          S2M = new ObservationType(env->getStaticObjectField(cls, "S2M", "Lorg/orekit/gnss/ObservationType;"));
          S2N = new ObservationType(env->getStaticObjectField(cls, "S2N", "Lorg/orekit/gnss/ObservationType;"));
          S2P = new ObservationType(env->getStaticObjectField(cls, "S2P", "Lorg/orekit/gnss/ObservationType;"));
          S2Q = new ObservationType(env->getStaticObjectField(cls, "S2Q", "Lorg/orekit/gnss/ObservationType;"));
          S2S = new ObservationType(env->getStaticObjectField(cls, "S2S", "Lorg/orekit/gnss/ObservationType;"));
          S2W = new ObservationType(env->getStaticObjectField(cls, "S2W", "Lorg/orekit/gnss/ObservationType;"));
          S2X = new ObservationType(env->getStaticObjectField(cls, "S2X", "Lorg/orekit/gnss/ObservationType;"));
          S2Y = new ObservationType(env->getStaticObjectField(cls, "S2Y", "Lorg/orekit/gnss/ObservationType;"));
          S3I = new ObservationType(env->getStaticObjectField(cls, "S3I", "Lorg/orekit/gnss/ObservationType;"));
          S3Q = new ObservationType(env->getStaticObjectField(cls, "S3Q", "Lorg/orekit/gnss/ObservationType;"));
          S3X = new ObservationType(env->getStaticObjectField(cls, "S3X", "Lorg/orekit/gnss/ObservationType;"));
          S4A = new ObservationType(env->getStaticObjectField(cls, "S4A", "Lorg/orekit/gnss/ObservationType;"));
          S4B = new ObservationType(env->getStaticObjectField(cls, "S4B", "Lorg/orekit/gnss/ObservationType;"));
          S4X = new ObservationType(env->getStaticObjectField(cls, "S4X", "Lorg/orekit/gnss/ObservationType;"));
          S5 = new ObservationType(env->getStaticObjectField(cls, "S5", "Lorg/orekit/gnss/ObservationType;"));
          S5A = new ObservationType(env->getStaticObjectField(cls, "S5A", "Lorg/orekit/gnss/ObservationType;"));
          S5B = new ObservationType(env->getStaticObjectField(cls, "S5B", "Lorg/orekit/gnss/ObservationType;"));
          S5C = new ObservationType(env->getStaticObjectField(cls, "S5C", "Lorg/orekit/gnss/ObservationType;"));
          S5D = new ObservationType(env->getStaticObjectField(cls, "S5D", "Lorg/orekit/gnss/ObservationType;"));
          S5I = new ObservationType(env->getStaticObjectField(cls, "S5I", "Lorg/orekit/gnss/ObservationType;"));
          S5P = new ObservationType(env->getStaticObjectField(cls, "S5P", "Lorg/orekit/gnss/ObservationType;"));
          S5Q = new ObservationType(env->getStaticObjectField(cls, "S5Q", "Lorg/orekit/gnss/ObservationType;"));
          S5X = new ObservationType(env->getStaticObjectField(cls, "S5X", "Lorg/orekit/gnss/ObservationType;"));
          S5Z = new ObservationType(env->getStaticObjectField(cls, "S5Z", "Lorg/orekit/gnss/ObservationType;"));
          S6 = new ObservationType(env->getStaticObjectField(cls, "S6", "Lorg/orekit/gnss/ObservationType;"));
          S6A = new ObservationType(env->getStaticObjectField(cls, "S6A", "Lorg/orekit/gnss/ObservationType;"));
          S6B = new ObservationType(env->getStaticObjectField(cls, "S6B", "Lorg/orekit/gnss/ObservationType;"));
          S6C = new ObservationType(env->getStaticObjectField(cls, "S6C", "Lorg/orekit/gnss/ObservationType;"));
          S6D = new ObservationType(env->getStaticObjectField(cls, "S6D", "Lorg/orekit/gnss/ObservationType;"));
          S6E = new ObservationType(env->getStaticObjectField(cls, "S6E", "Lorg/orekit/gnss/ObservationType;"));
          S6I = new ObservationType(env->getStaticObjectField(cls, "S6I", "Lorg/orekit/gnss/ObservationType;"));
          S6L = new ObservationType(env->getStaticObjectField(cls, "S6L", "Lorg/orekit/gnss/ObservationType;"));
          S6P = new ObservationType(env->getStaticObjectField(cls, "S6P", "Lorg/orekit/gnss/ObservationType;"));
          S6Q = new ObservationType(env->getStaticObjectField(cls, "S6Q", "Lorg/orekit/gnss/ObservationType;"));
          S6S = new ObservationType(env->getStaticObjectField(cls, "S6S", "Lorg/orekit/gnss/ObservationType;"));
          S6X = new ObservationType(env->getStaticObjectField(cls, "S6X", "Lorg/orekit/gnss/ObservationType;"));
          S6Z = new ObservationType(env->getStaticObjectField(cls, "S6Z", "Lorg/orekit/gnss/ObservationType;"));
          S7 = new ObservationType(env->getStaticObjectField(cls, "S7", "Lorg/orekit/gnss/ObservationType;"));
          S7D = new ObservationType(env->getStaticObjectField(cls, "S7D", "Lorg/orekit/gnss/ObservationType;"));
          S7I = new ObservationType(env->getStaticObjectField(cls, "S7I", "Lorg/orekit/gnss/ObservationType;"));
          S7P = new ObservationType(env->getStaticObjectField(cls, "S7P", "Lorg/orekit/gnss/ObservationType;"));
          S7Q = new ObservationType(env->getStaticObjectField(cls, "S7Q", "Lorg/orekit/gnss/ObservationType;"));
          S7X = new ObservationType(env->getStaticObjectField(cls, "S7X", "Lorg/orekit/gnss/ObservationType;"));
          S7Z = new ObservationType(env->getStaticObjectField(cls, "S7Z", "Lorg/orekit/gnss/ObservationType;"));
          S8 = new ObservationType(env->getStaticObjectField(cls, "S8", "Lorg/orekit/gnss/ObservationType;"));
          S8D = new ObservationType(env->getStaticObjectField(cls, "S8D", "Lorg/orekit/gnss/ObservationType;"));
          S8I = new ObservationType(env->getStaticObjectField(cls, "S8I", "Lorg/orekit/gnss/ObservationType;"));
          S8P = new ObservationType(env->getStaticObjectField(cls, "S8P", "Lorg/orekit/gnss/ObservationType;"));
          S8Q = new ObservationType(env->getStaticObjectField(cls, "S8Q", "Lorg/orekit/gnss/ObservationType;"));
          S8X = new ObservationType(env->getStaticObjectField(cls, "S8X", "Lorg/orekit/gnss/ObservationType;"));
          S9A = new ObservationType(env->getStaticObjectField(cls, "S9A", "Lorg/orekit/gnss/ObservationType;"));
          S9B = new ObservationType(env->getStaticObjectField(cls, "S9B", "Lorg/orekit/gnss/ObservationType;"));
          S9C = new ObservationType(env->getStaticObjectField(cls, "S9C", "Lorg/orekit/gnss/ObservationType;"));
          S9X = new ObservationType(env->getStaticObjectField(cls, "S9X", "Lorg/orekit/gnss/ObservationType;"));
          SA = new ObservationType(env->getStaticObjectField(cls, "SA", "Lorg/orekit/gnss/ObservationType;"));
          SB = new ObservationType(env->getStaticObjectField(cls, "SB", "Lorg/orekit/gnss/ObservationType;"));
          SC = new ObservationType(env->getStaticObjectField(cls, "SC", "Lorg/orekit/gnss/ObservationType;"));
          SD = new ObservationType(env->getStaticObjectField(cls, "SD", "Lorg/orekit/gnss/ObservationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::Frequency ObservationType::getFrequency(const ::org::orekit::gnss::SatelliteSystem & a0) const
      {
        return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getFrequency_08ebb2e5532551f9], a0.this$));
      }

      ::org::orekit::gnss::MeasurementType ObservationType::getMeasurementType() const
      {
        return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_b9f942cb72c4c59a]));
      }

      ::org::orekit::gnss::SignalCode ObservationType::getSignalCode() const
      {
        return ::org::orekit::gnss::SignalCode(env->callObjectMethod(this$, mids$[mid_getSignalCode_84919806000a2fe9]));
      }

      ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d7f884d006d0a7e9], a0.this$));
      }

      JArray< ObservationType > ObservationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_4f074092c8653291]));
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
      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg);
      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self);
      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self);
      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationType_values(PyTypeObject *type);
      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
      static PyGetSetDef t_ObservationType__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationType, measurementType),
        DECLARE_GET_FIELD(t_ObservationType, signalCode),
        DECLARE_GET_FIELD(t_ObservationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationType__methods_[] = {
        DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationType, getFrequency, METH_O),
        DECLARE_METHOD(t_ObservationType, getMeasurementType, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, getSignalCode, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
        { Py_tp_methods, t_ObservationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
      PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationType::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
      }

      void t_ObservationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SD)));
      }

      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
          return NULL;
        return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
      }
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::gnss::Frequency result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
        {
          OBJ_CALL(result = self->object.getFrequency(a0));
          return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrequency", arg);
        return NULL;
      }

      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self)
      {
        ::org::orekit::gnss::MeasurementType result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
      }

      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self)
      {
        ::org::orekit::gnss::SignalCode result((jobject) NULL);
        OBJ_CALL(result = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(result);
      }

      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationType::valueOf(a0));
          return t_ObservationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationType_values(PyTypeObject *type)
      {
        JArray< ObservationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationType::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
      }
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::MeasurementType value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
      }

      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::SignalCode value((jobject) NULL);
        OBJ_CALL(value = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTTesseralContext::class$ = NULL;
            jmethodID *FieldDSSTTesseralContext::mids$ = NULL;
            bool FieldDSSTTesseralContext::live$ = false;

            jclass FieldDSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_eba8e72a22c984ac] = env->getMethodID(cls, "getAx2oA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_eba8e72a22c984ac] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_eba8e72a22c984ac] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi_eba8e72a22c984ac] = env->getMethodID(cls, "getChi", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi2_eba8e72a22c984ac] = env->getMethodID(cls, "getChi2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_eba8e72a22c984ac] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getE2_eba8e72a22c984ac] = env->getMethodID(cls, "getE2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMoa_eba8e72a22c984ac] = env->getMethodID(cls, "getMoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_eba8e72a22c984ac] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbitPeriod_eba8e72a22c984ac] = env->getMethodID(cls, "getOrbitPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRatio_eba8e72a22c984ac] = env->getMethodID(cls, "getRatio", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_eba8e72a22c984ac] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTheta_eba8e72a22c984ac] = env->getMethodID(cls, "getTheta", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getAx2oA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAx2oA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getE2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE2_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMoa_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOrbitPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOrbitPeriod_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRatio() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRatio_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getTheta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTheta_eba8e72a22c984ac]));
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
            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args);
            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data);
            static PyGetSetDef t_FieldDSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, theta),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTTesseralContext)[] = {
              { Py_tp_methods, t_FieldDSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTTesseralContext, t_FieldDSSTTesseralContext, FieldDSSTTesseralContext);
            PyObject *t_FieldDSSTTesseralContext::wrap_Object(const FieldDSSTTesseralContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTTesseralContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTTesseralContext), &PY_TYPE_DEF(FieldDSSTTesseralContext), module, "FieldDSSTTesseralContext", 0);
            }

            void t_FieldDSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "class_", make_descriptor(FieldDSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "wrapfn_", make_descriptor(t_FieldDSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTTesseralContext::wrap_Object(FieldDSSTTesseralContext(((t_FieldDSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAx2oA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getE2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRatio());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTheta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAx2oA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getE2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRatio());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTheta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NegateDetector::class$ = NULL;
        jmethodID *NegateDetector::mids$ = NULL;
        bool NegateDetector::live$ = false;

        jclass NegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_efb7003d866d4523] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getOriginal_d73bb985ffde4156] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_aa01ca731fd42f9b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NegateDetector::NegateDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_efb7003d866d4523, a0.this$)) {}

        jdouble NegateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector NegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_d73bb985ffde4156]));
        }

        void NegateDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args);
        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self);
        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data);
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data);
        static PyGetSetDef t_NegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NegateDetector, original),
          DECLARE_GET_FIELD(t_NegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NegateDetector__methods_[] = {
          DECLARE_METHOD(t_NegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_NegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NegateDetector)[] = {
          { Py_tp_methods, t_NegateDetector__methods_ },
          { Py_tp_init, (void *) t_NegateDetector_init_ },
          { Py_tp_getset, t_NegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NegateDetector, t_NegateDetector, NegateDetector);
        PyObject *t_NegateDetector::wrap_Object(const NegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NegateDetector), &PY_TYPE_DEF(NegateDetector), module, "NegateDetector", 0);
        }

        void t_NegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "class_", make_descriptor(NegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "wrapfn_", make_descriptor(t_NegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NegateDetector::initializeClass, 1)))
            return NULL;
          return t_NegateDetector::wrap_Object(NegateDetector(((t_NegateDetector *) arg)->object.this$));
        }
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          NegateDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = NegateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NegateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *AntexLoader::class$ = NULL;
        jmethodID *AntexLoader::mids$ = NULL;
        bool AntexLoader::live$ = false;
        ::java::lang::String *AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES = NULL;

        jclass AntexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/AntexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_63a3364c21ade86b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_c9696a3ab5455033] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_findSatelliteAntenna_1a3c29a657e3b2a6] = env->getMethodID(cls, "findSatelliteAntenna", "(Lorg/orekit/gnss/SatelliteSystem;I)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getReceiversAntennas_2afa36052df4765d] = env->getMethodID(cls, "getReceiversAntennas", "()Ljava/util/List;");
            mids$[mid_getSatellitesAntennas_2afa36052df4765d] = env->getMethodID(cls, "getSatellitesAntennas", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ANTEX_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ANTEX_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AntexLoader::AntexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        AntexLoader::AntexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63a3364c21ade86b, a0.this$, a1.this$)) {}

        AntexLoader::AntexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9696a3ab5455033, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::utils::TimeSpanMap AntexLoader::findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_findSatelliteAntenna_1a3c29a657e3b2a6], a0.this$, a1));
        }

        ::java::util::List AntexLoader::getReceiversAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceiversAntennas_2afa36052df4765d]));
        }

        ::java::util::List AntexLoader::getSatellitesAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellitesAntennas_2afa36052df4765d]));
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
      namespace antenna {
        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args);
        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data);
        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data);
        static PyGetSetDef t_AntexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_AntexLoader, receiversAntennas),
          DECLARE_GET_FIELD(t_AntexLoader, satellitesAntennas),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AntexLoader__methods_[] = {
          DECLARE_METHOD(t_AntexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, findSatelliteAntenna, METH_VARARGS),
          DECLARE_METHOD(t_AntexLoader, getReceiversAntennas, METH_NOARGS),
          DECLARE_METHOD(t_AntexLoader, getSatellitesAntennas, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AntexLoader)[] = {
          { Py_tp_methods, t_AntexLoader__methods_ },
          { Py_tp_init, (void *) t_AntexLoader_init_ },
          { Py_tp_getset, t_AntexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AntexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AntexLoader, t_AntexLoader, AntexLoader);

        void t_AntexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(AntexLoader), &PY_TYPE_DEF(AntexLoader), module, "AntexLoader", 0);
        }

        void t_AntexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "class_", make_descriptor(AntexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "wrapfn_", make_descriptor(t_AntexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "boxfn_", make_descriptor(boxObject));
          env->getClass(AntexLoader::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "DEFAULT_ANTEX_SUPPORTED_NAMES", make_descriptor(j2p(*AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES)));
        }

        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AntexLoader::initializeClass, 1)))
            return NULL;
          return t_AntexLoader::wrap_Object(AntexLoader(((t_AntexLoader *) arg)->object.this$));
        }
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AntexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = AntexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AntexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AntexLoader(a0, a1, a2));
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

        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.findSatelliteAntenna(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(SatelliteAntenna));
          }

          PyErr_SetArgsError((PyObject *) self, "findSatelliteAntenna", args);
          return NULL;
        }

        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(ReceiverAntenna));
        }

        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonGravityFields::class$ = NULL;
          jmethodID *PythonGravityFields::mids$ = NULL;
          bool PythonGravityFields::live$ = false;

          jclass PythonGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_0fdcb0a280e1e598] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_10d7c0f6de166543] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_c2f412128b078525] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGravityFields::PythonGravityFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonGravityFields::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonGravityFields::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonGravityFields::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self);
          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args);
          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data);
          static PyGetSetDef t_PythonGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGravityFields, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGravityFields__methods_[] = {
            DECLARE_METHOD(t_PythonGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGravityFields, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGravityFields)[] = {
            { Py_tp_methods, t_PythonGravityFields__methods_ },
            { Py_tp_init, (void *) t_PythonGravityFields_init_ },
            { Py_tp_getset, t_PythonGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGravityFields, t_PythonGravityFields, PythonGravityFields);

          void t_PythonGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGravityFields), &PY_TYPE_DEF(PythonGravityFields), module, "PythonGravityFields", 1);
          }

          void t_PythonGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "class_", make_descriptor(PythonGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "wrapfn_", make_descriptor(t_PythonGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGravityFields::initializeClass);
            JNINativeMethod methods[] = {
              { "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantNormalizedProvider0 },
              { "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantUnnormalizedProvider1 },
              { "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getNormalizedProvider2 },
              { "getOceanTidesWaves", "(II)Ljava/util/List;", (void *) t_PythonGravityFields_getOceanTidesWaves3 },
              { "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getUnnormalizedProvider4 },
              { "pythonDecRef", "()V", (void *) t_PythonGravityFields_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGravityFields::initializeClass, 1)))
              return NULL;
            return t_PythonGravityFields::wrap_Object(PythonGravityFields(((t_PythonGravityFields *) arg)->object.this$));
          }
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds)
          {
            PythonGravityFields object((jobject) NULL);

            INT_CALL(object = PythonGravityFields());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args)
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

          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantNormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantUnnormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantUnnormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getNormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getOceanTidesWaves", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getOceanTidesWaves", result);
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

          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getUnnormalizedProvider", result);
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

          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data)
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
