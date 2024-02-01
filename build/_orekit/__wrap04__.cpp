#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnitsConverter::class$ = NULL;
            jmethodID *RangeUnitsConverter::mids$ = NULL;
            bool RangeUnitsConverter::live$ = false;

            jclass RangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_metersToRu_b2dab880055d21ac] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_b2dab880055d21ac] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble RangeUnitsConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_b2dab880055d21ac], a0.this$, a1.this$, a2);
            }

            jdouble RangeUnitsConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_b2dab880055d21ac], a0.this$, a1.this$, a2);
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
            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args);
            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args);

            static PyMethodDef t_RangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_RangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnitsConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnitsConverter)[] = {
              { Py_tp_methods, t_RangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RangeUnitsConverter, t_RangeUnitsConverter, RangeUnitsConverter);

            void t_RangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnitsConverter), &PY_TYPE_DEF(RangeUnitsConverter), module, "RangeUnitsConverter", 0);
            }

            void t_RangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "class_", make_descriptor(RangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "wrapfn_", make_descriptor(t_RangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_RangeUnitsConverter::wrap_Object(RangeUnitsConverter(((t_RangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomVectorGenerator::class$ = NULL;
      jmethodID *RandomVectorGenerator::mids$ = NULL;
      bool RandomVectorGenerator::live$ = false;

      jclass RandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > RandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
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
      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self);

      static PyMethodDef t_RandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomVectorGenerator)[] = {
        { Py_tp_methods, t_RandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomVectorGenerator, t_RandomVectorGenerator, RandomVectorGenerator);

      void t_RandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomVectorGenerator), &PY_TYPE_DEF(RandomVectorGenerator), module, "RandomVectorGenerator", 0);
      }

      void t_RandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "class_", make_descriptor(RandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "wrapfn_", make_descriptor(t_RandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomVectorGenerator::wrap_Object(RandomVectorGenerator(((t_RandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCnmSnmReader::class$ = NULL;
          jmethodID *FESCnmSnmReader::mids$ = NULL;
          bool FESCnmSnmReader::live$ = false;

          jclass FESCnmSnmReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCnmSnmReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4a1c1c41794e71b1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCnmSnmReader::FESCnmSnmReader(const ::java::lang::String & a0, jdouble a1) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_4a1c1c41794e71b1, a0.this$, a1)) {}

          void FESCnmSnmReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args);

          static PyMethodDef t_FESCnmSnmReader__methods_[] = {
            DECLARE_METHOD(t_FESCnmSnmReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCnmSnmReader)[] = {
            { Py_tp_methods, t_FESCnmSnmReader__methods_ },
            { Py_tp_init, (void *) t_FESCnmSnmReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCnmSnmReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCnmSnmReader, t_FESCnmSnmReader, FESCnmSnmReader);

          void t_FESCnmSnmReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCnmSnmReader), &PY_TYPE_DEF(FESCnmSnmReader), module, "FESCnmSnmReader", 0);
          }

          void t_FESCnmSnmReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "class_", make_descriptor(FESCnmSnmReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "wrapfn_", make_descriptor(t_FESCnmSnmReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCnmSnmReader::initializeClass, 1)))
              return NULL;
            return t_FESCnmSnmReader::wrap_Object(FESCnmSnmReader(((t_FESCnmSnmReader *) arg)->object.this$));
          }
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCnmSnmReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            FESCnmSnmReader object((jobject) NULL);

            if (!parseArgs(args, "sD", &a0, &a1))
            {
              INT_CALL(object = FESCnmSnmReader(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCnmSnmReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonAdditionalDerivativesProvider::live$ = false;

        jclass PythonAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_3642c368f508585f] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdditionalDerivativesProvider::PythonAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self);
        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdditionalDerivativesProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdditionalDerivativesProvider, t_PythonAdditionalDerivativesProvider, PythonAdditionalDerivativesProvider);

        void t_PythonAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonAdditionalDerivativesProvider), module, "PythonAdditionalDerivativesProvider", 1);
        }

        void t_PythonAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "class_", make_descriptor(PythonAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;", (void *) t_PythonAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAdditionalDerivativesProvider::wrap_Object(PythonAdditionalDerivativesProvider(((t_PythonAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::CombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::CombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data)
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
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *NumericalPropagatorBuilder::class$ = NULL;
        jmethodID *NumericalPropagatorBuilder::mids$ = NULL;
        bool NumericalPropagatorBuilder::live$ = false;

        jclass NumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/NumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c587d45992c10e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_ab7ccb03b5385986] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_33ce7dbdc1ed7751] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_buildLeastSquaresModel_9cee4860e0dd98b4] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/BatchLSModel;");
            mids$[mid_buildPropagator_534e89621331d918] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/numerical/NumericalPropagator;");
            mids$[mid_copy_c01a9087d19747c3] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;");
            mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_97efb8d7c46d45d7] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_setMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_3c587d45992c10e4, a0.this$, a1.this$, a2.this$, a3)) {}

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_ab7ccb03b5385986, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        void NumericalPropagatorBuilder::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_33ce7dbdc1ed7751], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::BatchLSModel NumericalPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::BatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_9cee4860e0dd98b4], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::numerical::NumericalPropagator NumericalPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::numerical::NumericalPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_534e89621331d918], a0.this$));
        }

        NumericalPropagatorBuilder NumericalPropagatorBuilder::copy() const
        {
          return NumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_c01a9087d19747c3]));
        }

        ::java::util::List NumericalPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder NumericalPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_97efb8d7c46d45d7]));
        }

        jdouble NumericalPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
        }

        void NumericalPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_1ad26e8c8c0cd65b], a0);
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
        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data);
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_NumericalPropagatorBuilder, mass),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_NumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagatorBuilder_init_ },
          { Py_tp_getset, t_NumericalPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(NumericalPropagatorBuilder, t_NumericalPropagatorBuilder, NumericalPropagatorBuilder);

        void t_NumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagatorBuilder), &PY_TYPE_DEF(NumericalPropagatorBuilder), module, "NumericalPropagatorBuilder", 0);
        }

        void t_NumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "class_", make_descriptor(NumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_NumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagatorBuilder::wrap_Object(NumericalPropagatorBuilder(((t_NumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::BatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_BatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::numerical::t_NumericalPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          NumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_NumericalPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouLegacyNavigationMessage::class$ = NULL;
            jmethodID *BeidouLegacyNavigationMessage::mids$ = NULL;
            bool BeidouLegacyNavigationMessage::live$ = false;
            ::java::lang::String *BeidouLegacyNavigationMessage::D1 = NULL;
            ::java::lang::String *BeidouLegacyNavigationMessage::D2 = NULL;

            jclass BeidouLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAODC_d6ab429752e7c267] = env->getMethodID(cls, "getAODC", "()I");
                mids$[mid_getAODE_d6ab429752e7c267] = env->getMethodID(cls, "getAODE", "()I");
                mids$[mid_getSvAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getTGD1_9981f74b2d109da6] = env->getMethodID(cls, "getTGD1", "()D");
                mids$[mid_getTGD2_9981f74b2d109da6] = env->getMethodID(cls, "getTGD2", "()D");
                mids$[mid_setAODC_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAODC", "(D)V");
                mids$[mid_setAODE_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAODE", "(D)V");
                mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setTGD1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTGD1", "(D)V");
                mids$[mid_setTGD2_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTGD2", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                D1 = new ::java::lang::String(env->getStaticObjectField(cls, "D1", "Ljava/lang/String;"));
                D2 = new ::java::lang::String(env->getStaticObjectField(cls, "D2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouLegacyNavigationMessage::BeidouLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint BeidouLegacyNavigationMessage::getAODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODC_d6ab429752e7c267]);
            }

            jint BeidouLegacyNavigationMessage::getAODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODE_d6ab429752e7c267]);
            }

            jdouble BeidouLegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_9981f74b2d109da6]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD1_9981f74b2d109da6]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD2_9981f74b2d109da6]);
            }

            void BeidouLegacyNavigationMessage::setAODC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODC_1ad26e8c8c0cd65b], a0);
            }

            void BeidouLegacyNavigationMessage::setAODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODE_1ad26e8c8c0cd65b], a0);
            }

            void BeidouLegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD1_1ad26e8c8c0cd65b], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD2_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouLegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODC),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODE),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD1),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODC, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODE, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD1, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouLegacyNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouLegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouLegacyNavigationMessage, t_BeidouLegacyNavigationMessage, BeidouLegacyNavigationMessage);

            void t_BeidouLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouLegacyNavigationMessage), &PY_TYPE_DEF(BeidouLegacyNavigationMessage), module, "BeidouLegacyNavigationMessage", 0);
            }

            void t_BeidouLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "class_", make_descriptor(BeidouLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "wrapfn_", make_descriptor(t_BeidouLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouLegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D1", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D2", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D2)));
            }

            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouLegacyNavigationMessage::wrap_Object(BeidouLegacyNavigationMessage(((t_BeidouLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              BeidouLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = BeidouLegacyNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD1", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD2", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODC", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODE", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD1", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD2", arg);
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
#include "org/orekit/rugged/linesensor/PythonLineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *PythonLineDatation::class$ = NULL;
        jmethodID *PythonLineDatation::mids$ = NULL;
        bool PythonLineDatation::live$ = false;

        jclass PythonLineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/PythonLineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_d2854c25a21df51f] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_209f08246d708042] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_bf28ed64d6e8576b] = env->getMethodID(cls, "getRate", "(D)D");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonLineDatation::PythonLineDatation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonLineDatation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonLineDatation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonLineDatation::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace linesensor {
        static PyObject *t_PythonLineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonLineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonLineDatation_init_(t_PythonLineDatation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonLineDatation_finalize(t_PythonLineDatation *self);
        static PyObject *t_PythonLineDatation_pythonExtension(t_PythonLineDatation *self, PyObject *args);
        static jobject JNICALL t_PythonLineDatation_getDate0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonLineDatation_getLine1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jdouble JNICALL t_PythonLineDatation_getRate2(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonLineDatation_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonLineDatation_get__self(t_PythonLineDatation *self, void *data);
        static PyGetSetDef t_PythonLineDatation__fields_[] = {
          DECLARE_GET_FIELD(t_PythonLineDatation, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonLineDatation__methods_[] = {
          DECLARE_METHOD(t_PythonLineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonLineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonLineDatation, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonLineDatation, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonLineDatation)[] = {
          { Py_tp_methods, t_PythonLineDatation__methods_ },
          { Py_tp_init, (void *) t_PythonLineDatation_init_ },
          { Py_tp_getset, t_PythonLineDatation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonLineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonLineDatation, t_PythonLineDatation, PythonLineDatation);

        void t_PythonLineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonLineDatation), &PY_TYPE_DEF(PythonLineDatation), module, "PythonLineDatation", 1);
        }

        void t_PythonLineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLineDatation), "class_", make_descriptor(PythonLineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLineDatation), "wrapfn_", make_descriptor(t_PythonLineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLineDatation), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonLineDatation::initializeClass);
          JNINativeMethod methods[] = {
            { "getDate", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonLineDatation_getDate0 },
            { "getLine", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonLineDatation_getLine1 },
            { "getRate", "(D)D", (void *) t_PythonLineDatation_getRate2 },
            { "pythonDecRef", "()V", (void *) t_PythonLineDatation_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonLineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonLineDatation::initializeClass, 1)))
            return NULL;
          return t_PythonLineDatation::wrap_Object(PythonLineDatation(((t_PythonLineDatation *) arg)->object.this$));
        }
        static PyObject *t_PythonLineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonLineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonLineDatation_init_(t_PythonLineDatation *self, PyObject *args, PyObject *kwds)
        {
          PythonLineDatation object((jobject) NULL);

          INT_CALL(object = PythonLineDatation());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonLineDatation_finalize(t_PythonLineDatation *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonLineDatation_pythonExtension(t_PythonLineDatation *self, PyObject *args)
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

        static jobject JNICALL t_PythonLineDatation_getDate0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLineDatation::mids$[PythonLineDatation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jdouble JNICALL t_PythonLineDatation_getLine1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLineDatation::mids$[PythonLineDatation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getLine", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getLine", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonLineDatation_getRate2(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLineDatation::mids$[PythonLineDatation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getRate", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getRate", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonLineDatation_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLineDatation::mids$[PythonLineDatation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonLineDatation::mids$[PythonLineDatation::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonLineDatation_get__self(t_PythonLineDatation *self, void *data)
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
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorBuilder::class$ = NULL;
        jmethodID *KalmanEstimatorBuilder::mids$ = NULL;
        bool KalmanEstimatorBuilder::live$ = false;

        jclass KalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_b41635c5c8eccc29] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_build_f809b266f2caa2f9] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/KalmanEstimator;");
            mids$[mid_decomposer_ea8776b1cedccd58] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_6aad127edf0c2f36] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanEstimatorBuilder::KalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        KalmanEstimatorBuilder KalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_b41635c5c8eccc29], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::KalmanEstimator KalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::KalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_f809b266f2caa2f9]));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_ea8776b1cedccd58], a0.this$));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_6aad127edf0c2f36], a0.this$, a1.this$));
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
        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self);
        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_KalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_KalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorBuilder, t_KalmanEstimatorBuilder, KalmanEstimatorBuilder);

        void t_KalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorBuilder), &PY_TYPE_DEF(KalmanEstimatorBuilder), module, "KalmanEstimatorBuilder", 0);
        }

        void t_KalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "class_", make_descriptor(KalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_KalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorBuilder::wrap_Object(KalmanEstimatorBuilder(((t_KalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          KalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = KalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::KalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_KalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguitySolver::class$ = NULL;
          jmethodID *AmbiguitySolver::mids$ = NULL;
          bool AmbiguitySolver::live$ = false;

          jclass AmbiguitySolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguitySolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_194abbe377979f00] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver;Lorg/orekit/estimation/measurements/gnss/AmbiguityAcceptance;)V");
              mids$[mid_fixIntegerAmbiguities_d67dabb42f6c4160] = env->getMethodID(cls, "fixIntegerAmbiguities", "(ILjava/util/List;Lorg/hipparchus/linear/RealMatrix;)Ljava/util/List;");
              mids$[mid_getAllAmbiguityDrivers_d751c1a57012b438] = env->getMethodID(cls, "getAllAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_unFixAmbiguity_680e005705d5f0aa] = env->getMethodID(cls, "unFixAmbiguity", "(Lorg/orekit/utils/ParameterDriver;)V");
              mids$[mid_getFreeAmbiguityDrivers_d751c1a57012b438] = env->getMethodID(cls, "getFreeAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_getFreeAmbiguityIndirection_614db482d0c8bf3b] = env->getMethodID(cls, "getFreeAmbiguityIndirection", "(ILjava/util/List;)[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguitySolver::AmbiguitySolver(const ::java::util::List & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver & a1, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_194abbe377979f00, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List AmbiguitySolver::fixIntegerAmbiguities(jint a0, const ::java::util::List & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_fixIntegerAmbiguities_d67dabb42f6c4160], a0, a1.this$, a2.this$));
          }

          ::java::util::List AmbiguitySolver::getAllAmbiguityDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllAmbiguityDrivers_d751c1a57012b438]));
          }

          void AmbiguitySolver::unFixAmbiguity(const ::org::orekit::utils::ParameterDriver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_unFixAmbiguity_680e005705d5f0aa], a0.this$);
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
          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args);
          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self);
          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg);
          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data);
          static PyGetSetDef t_AmbiguitySolver__fields_[] = {
            DECLARE_GET_FIELD(t_AmbiguitySolver, allAmbiguityDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguitySolver__methods_[] = {
            DECLARE_METHOD(t_AmbiguitySolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, fixIntegerAmbiguities, METH_VARARGS),
            DECLARE_METHOD(t_AmbiguitySolver, getAllAmbiguityDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AmbiguitySolver, unFixAmbiguity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguitySolver)[] = {
            { Py_tp_methods, t_AmbiguitySolver__methods_ },
            { Py_tp_init, (void *) t_AmbiguitySolver_init_ },
            { Py_tp_getset, t_AmbiguitySolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguitySolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguitySolver, t_AmbiguitySolver, AmbiguitySolver);

          void t_AmbiguitySolver::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguitySolver), &PY_TYPE_DEF(AmbiguitySolver), module, "AmbiguitySolver", 0);
          }

          void t_AmbiguitySolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "class_", make_descriptor(AmbiguitySolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "wrapfn_", make_descriptor(t_AmbiguitySolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguitySolver::initializeClass, 1)))
              return NULL;
            return t_AmbiguitySolver::wrap_Object(AmbiguitySolver(((t_AmbiguitySolver *) arg)->object.this$));
          }
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguitySolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver a1((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance a2((jobject) NULL);
            AmbiguitySolver object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver::initializeClass, ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = AmbiguitySolver(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args)
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::List::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.fixIntegerAmbiguities(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            PyErr_SetArgsError((PyObject *) self, "fixIntegerAmbiguities", args);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg)
          {
            ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.unFixAmbiguity(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "unFixAmbiguity", arg);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MinSelector::class$ = NULL;
        jmethodID *MinSelector::mids$ = NULL;
        bool MinSelector::live$ = false;

        jclass MinSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MinSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_acf41bb22ebbb76f] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MinSelector;");
            mids$[mid_selectFirst_0fc66ee74538f12c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MinSelector MinSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MinSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_acf41bb22ebbb76f]));
        }

        jboolean MinSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_0fc66ee74538f12c], a0, a1);
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
      namespace utils {
        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args);
        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data);
        static PyGetSetDef t_MinSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MinSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MinSelector__methods_[] = {
          DECLARE_METHOD(t_MinSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MinSelector)[] = {
          { Py_tp_methods, t_MinSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MinSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MinSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MinSelector, t_MinSelector, MinSelector);

        void t_MinSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MinSelector), &PY_TYPE_DEF(MinSelector), module, "MinSelector", 0);
        }

        void t_MinSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "class_", make_descriptor(MinSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "wrapfn_", make_descriptor(t_MinSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MinSelector::initializeClass, 1)))
            return NULL;
          return t_MinSelector::wrap_Object(MinSelector(((t_MinSelector *) arg)->object.this$));
        }
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MinSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MinSelector_getInstance(PyTypeObject *type)
        {
          MinSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MinSelector::getInstance());
          return t_MinSelector::wrap_Object(result);
        }

        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MinSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data)
        {
          MinSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MinSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencySmoother::class$ = NULL;
          jmethodID *SingleFrequencySmoother::mids$ = NULL;
          bool SingleFrequencySmoother::live$ = false;

          jclass SingleFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cd306a5d7ea9bfa1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/MeasurementType;DID)V");
              mids$[mid_copyObservationData_b6125958e639421b] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_c28dd2229953b7ca] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter;");
              mids$[mid_filterDataSet_14c361ebfb1ee348] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_215ee6429c05b9a0] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_215ee6429c05b9a0] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencySmoother::SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd306a5d7ea9bfa1, a0.this$, a1, a2, a3)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_b6125958e639421b], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter SingleFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::SatelliteSystem & a2) const
          {
            return ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_c28dd2229953b7ca], a0.this$, a1.this$, a2.this$));
          }

          void SingleFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_14c361ebfb1ee348], a0.this$, a1.this$, a2, a3.this$);
          }

          ::java::util::HashMap SingleFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_215ee6429c05b9a0]));
          }

          ::java::util::HashMap SingleFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_215ee6429c05b9a0]));
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
          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data);
          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data);
          static PyGetSetDef t_SingleFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingleFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_SingleFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencySmoother)[] = {
            { Py_tp_methods, t_SingleFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencySmoother_init_ },
            { Py_tp_getset, t_SingleFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleFrequencySmoother, t_SingleFrequencySmoother, SingleFrequencySmoother);

          void t_SingleFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencySmoother), &PY_TYPE_DEF(SingleFrequencySmoother), module, "SingleFrequencySmoother", 0);
          }

          void t_SingleFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "class_", make_descriptor(SingleFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "wrapfn_", make_descriptor(t_SingleFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencySmoother::wrap_Object(SingleFrequencySmoother(((t_SingleFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::MeasurementType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jdouble a3;
            SingleFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "KDID", ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_MeasurementType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleFrequencySmoother(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg)
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

          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2));
              return ::org::orekit::estimation::measurements::filtering::t_SingleFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KKIK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(SingleFrequencyHatchFilter));
          }

          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ProcessingState::class$ = NULL;
            jmethodID *ProcessingState::mids$ = NULL;
            bool ProcessingState::live$ = false;

            jclass ProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
          namespace parsing {
            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg);

            static PyMethodDef t_ProcessingState__methods_[] = {
              DECLARE_METHOD(t_ProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ProcessingState)[] = {
              { Py_tp_methods, t_ProcessingState__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ProcessingState, t_ProcessingState, ProcessingState);

            void t_ProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(ProcessingState), &PY_TYPE_DEF(ProcessingState), module, "ProcessingState", 0);
            }

            void t_ProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "class_", make_descriptor(ProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "wrapfn_", make_descriptor(t_ProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ProcessingState::initializeClass, 1)))
                return NULL;
              return t_ProcessingState::wrap_Object(ProcessingState(((t_ProcessingState *) arg)->object.this$));
            }
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg)
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
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplex::class$ = NULL;
      jmethodID *FieldComplex::mids$ = NULL;
      bool FieldComplex::live$ = false;

      jclass FieldComplex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_bab44dcbad09a0fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_082d0eb1eb81e571] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acos_082d0eb1eb81e571] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acosh_082d0eb1eb81e571] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_44ec11f3ee7128be] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_f738e060ca13afad] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_8581134ac015d992] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asin_082d0eb1eb81e571] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asinh_082d0eb1eb81e571] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan_082d0eb1eb81e571] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan2_44ec11f3ee7128be] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atanh_082d0eb1eb81e571] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cbrt_082d0eb1eb81e571] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_ceil_082d0eb1eb81e571] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_conjugate_082d0eb1eb81e571] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_44ec11f3ee7128be] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_f738e060ca13afad] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cos_082d0eb1eb81e571] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cosh_082d0eb1eb81e571] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_44ec11f3ee7128be] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_f738e060ca13afad] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_8581134ac015d992] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_c2458996c0aeaf74] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Z");
          mids$[mid_equals_b3e1132068c3e32c] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_equals_40927563e4138115] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_b3e1132068c3e32c] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_exp_082d0eb1eb81e571] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_expm1_082d0eb1eb81e571] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_floor_082d0eb1eb81e571] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getArgument_08d37e3f77b7239d] = env->getMethodID(cls, "getArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_fb49046101e8d48e] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getI_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getImaginary_08d37e3f77b7239d] = env->getMethodID(cls, "getImaginary", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getImaginaryPart_08d37e3f77b7239d] = env->getMethodID(cls, "getImaginaryPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInf_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getInf", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusI_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusOne_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getMinusOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getNaN_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getOne_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPartsField_577649682b9910c1] = env->getMethodID(cls, "getPartsField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_082d0eb1eb81e571] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPi_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getPi", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_08d37e3f77b7239d] = env->getMethodID(cls, "getRealPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_4e759bda7570b5d0] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_44ec11f3ee7128be] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_eee3de00fe971136] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_eee3de00fe971136] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_eee3de00fe971136] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_e850ca118aa003e2] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_dfc45b6365518be1] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_1853272de87ee45b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_7e606ef42a185705] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_5c9afab420b462c1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_4820bda83845f7fb] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_d582c5bf671ad768] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_12c35659a1f1799b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log_082d0eb1eb81e571] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log10_082d0eb1eb81e571] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log1p_082d0eb1eb81e571] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_44ec11f3ee7128be] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_f738e060ca13afad] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_894db97839eec318] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_8581134ac015d992] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyMinusI_082d0eb1eb81e571] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyPlusI_082d0eb1eb81e571] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_negate_082d0eb1eb81e571] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_newInstance_f738e060ca13afad] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_nthRoot_11883c1c01a1aa4c] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_44ec11f3ee7128be] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_f738e060ca13afad] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_894db97839eec318] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_8581134ac015d992] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_reciprocal_082d0eb1eb81e571] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_44ec11f3ee7128be] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_f738e060ca13afad] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rint_082d0eb1eb81e571] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rootN_894db97839eec318] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_scalb_894db97839eec318] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sign_082d0eb1eb81e571] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sin_082d0eb1eb81e571] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_082d0eb1eb81e571] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_082d0eb1eb81e571] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sqrt1z_082d0eb1eb81e571] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_44ec11f3ee7128be] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_f738e060ca13afad] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_8581134ac015d992] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tan_082d0eb1eb81e571] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tanh_082d0eb1eb81e571] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toDegrees_082d0eb1eb81e571] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toRadians_082d0eb1eb81e571] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_082d0eb1eb81e571] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_8581134ac015d992] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_151d0ca7c89aa768] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_createComplex_151d0ca7c89aa768] = env->getMethodID(cls, "createComplex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab44dcbad09a0fe, a0.this$, a1.this$)) {}

      FieldComplex FieldComplex::abs() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_abs_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::acos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acos_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::acosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acosh_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::add(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::add(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::add(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_8581134ac015d992], a0.this$));
      }

      FieldComplex FieldComplex::asin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asin_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::asinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asinh_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::atan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::atan2(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan2_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::atanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atanh_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::cbrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cbrt_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::ceil() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ceil_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::conjugate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_conjugate_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::copySign(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::copySign(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::cos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cos_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::cosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cosh_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::divide(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::divide(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_8581134ac015d992], a0.this$));
      }

      jboolean FieldComplex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_c2458996c0aeaf74], a0.this$, a1.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_b3e1132068c3e32c], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_40927563e4138115], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equalsWithRelativeTolerance(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_b3e1132068c3e32c], a0.this$, a1.this$, a2);
      }

      FieldComplex FieldComplex::exp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_exp_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::expm1() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_expm1_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::floor() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_floor_082d0eb1eb81e571]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getArgument_08d37e3f77b7239d]));
      }

      ::org::hipparchus::complex::FieldComplexField FieldComplex::getField() const
      {
        return ::org::hipparchus::complex::FieldComplexField(env->callObjectMethod(this$, mids$[mid_getField_fb49046101e8d48e]));
      }

      FieldComplex FieldComplex::getI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getI_4e759bda7570b5d0], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginary() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginary_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginaryPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginaryPart_08d37e3f77b7239d]));
      }

      FieldComplex FieldComplex::getInf(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getInf_4e759bda7570b5d0], a0.this$));
      }

      FieldComplex FieldComplex::getMinusI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_4e759bda7570b5d0], a0.this$));
      }

      FieldComplex FieldComplex::getMinusOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusOne_4e759bda7570b5d0], a0.this$));
      }

      FieldComplex FieldComplex::getNaN(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getNaN_4e759bda7570b5d0], a0.this$));
      }

      FieldComplex FieldComplex::getOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getOne_4e759bda7570b5d0], a0.this$));
      }

      ::org::hipparchus::Field FieldComplex::getPartsField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getPartsField_577649682b9910c1]));
      }

      FieldComplex FieldComplex::getPi() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_getPi_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::getPi(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getPi_4e759bda7570b5d0], a0.this$));
      }

      jdouble FieldComplex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getRealPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRealPart_08d37e3f77b7239d]));
      }

      FieldComplex FieldComplex::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getZero_4e759bda7570b5d0], a0.this$));
      }

      jint FieldComplex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      FieldComplex FieldComplex::hypot(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_hypot_44ec11f3ee7128be], a0.this$));
      }

      jboolean FieldComplex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean FieldComplex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_eee3de00fe971136]);
      }

      jboolean FieldComplex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      jboolean FieldComplex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_eee3de00fe971136]);
      }

      jboolean FieldComplex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_eee3de00fe971136]);
      }

      FieldComplex FieldComplex::linearCombination(const JArray< jdouble > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_e850ca118aa003e2], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const JArray< FieldComplex > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_dfc45b6365518be1], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_1853272de87ee45b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_7e606ef42a185705], a0, a1.this$, a2, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_5c9afab420b462c1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_4820bda83845f7fb], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5, const FieldComplex & a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_d582c5bf671ad768], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5, jdouble a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_12c35659a1f1799b], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldComplex FieldComplex::log() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::log10() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log10_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::log1p() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log1p_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::multiply(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::multiply(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::multiply(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_894db97839eec318], a0));
      }

      FieldComplex FieldComplex::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_8581134ac015d992], a0.this$));
      }

      FieldComplex FieldComplex::multiplyMinusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::multiplyPlusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::negate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_negate_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::newInstance(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_newInstance_f738e060ca13afad], a0));
      }

      ::java::util::List FieldComplex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_11883c1c01a1aa4c], a0));
      }

      FieldComplex FieldComplex::pow(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::pow(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::pow(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_894db97839eec318], a0));
      }

      FieldComplex FieldComplex::pow(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_8581134ac015d992], a0.this$));
      }

      FieldComplex FieldComplex::reciprocal() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_reciprocal_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::remainder(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::remainder(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::rint() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rint_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::rootN(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rootN_894db97839eec318], a0));
      }

      FieldComplex FieldComplex::scalb(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_scalb_894db97839eec318], a0));
      }

      FieldComplex FieldComplex::sign() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sign_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::sin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sin_082d0eb1eb81e571]));
      }

      ::org::hipparchus::util::FieldSinCos FieldComplex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      FieldComplex FieldComplex::sinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sinh_082d0eb1eb81e571]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldComplex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      FieldComplex FieldComplex::sqrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::sqrt1z() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt1z_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::subtract(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_44ec11f3ee7128be], a0.this$));
      }

      FieldComplex FieldComplex::subtract(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_f738e060ca13afad], a0));
      }

      FieldComplex FieldComplex::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_8581134ac015d992], a0.this$));
      }

      FieldComplex FieldComplex::tan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tan_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::tanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tanh_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::toDegrees() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toDegrees_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::toRadians() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toRadians_082d0eb1eb81e571]));
      }

      ::java::lang::String FieldComplex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      FieldComplex FieldComplex::ulp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ulp_082d0eb1eb81e571]));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8581134ac015d992], a0.this$));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_151d0ca7c89aa768], a0.this$, a1.this$));
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
      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args);
      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplex_abs(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_asin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self);
      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_cos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_exp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self);
      static PyObject *t_FieldComplex_floor(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self);
      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_log(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log10(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_negate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_rint(t_FieldComplex *self);
      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_sign(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self);
      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_tan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data);
      static PyGetSetDef t_FieldComplex__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplex, argument),
        DECLARE_GET_FIELD(t_FieldComplex, field),
        DECLARE_GET_FIELD(t_FieldComplex, imaginary),
        DECLARE_GET_FIELD(t_FieldComplex, imaginaryPart),
        DECLARE_GET_FIELD(t_FieldComplex, infinite),
        DECLARE_GET_FIELD(t_FieldComplex, mathematicalInteger),
        DECLARE_GET_FIELD(t_FieldComplex, naN),
        DECLARE_GET_FIELD(t_FieldComplex, partsField),
        DECLARE_GET_FIELD(t_FieldComplex, pi),
        DECLARE_GET_FIELD(t_FieldComplex, real),
        DECLARE_GET_FIELD(t_FieldComplex, realPart),
        DECLARE_GET_FIELD(t_FieldComplex, zero),
        DECLARE_GET_FIELD(t_FieldComplex, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplex__methods_[] = {
        DECLARE_METHOD(t_FieldComplex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan2, METH_O),
        DECLARE_METHOD(t_FieldComplex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getInf, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getPartsField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, hypot, METH_O),
        DECLARE_METHOD(t_FieldComplex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, newInstance, METH_O),
        DECLARE_METHOD(t_FieldComplex, nthRoot, METH_O),
        DECLARE_METHOD(t_FieldComplex, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, rootN, METH_O),
        DECLARE_METHOD(t_FieldComplex, scalb, METH_O),
        DECLARE_METHOD(t_FieldComplex, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplex)[] = {
        { Py_tp_methods, t_FieldComplex__methods_ },
        { Py_tp_init, (void *) t_FieldComplex_init_ },
        { Py_tp_getset, t_FieldComplex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplex, t_FieldComplex, FieldComplex);
      PyObject *t_FieldComplex::wrap_Object(const FieldComplex& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplex::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplex::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplex), &PY_TYPE_DEF(FieldComplex), module, "FieldComplex", 0);
      }

      void t_FieldComplex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "class_", make_descriptor(FieldComplex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "wrapfn_", make_descriptor(t_FieldComplex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplex::initializeClass, 1)))
          return NULL;
        return t_FieldComplex::wrap_Object(FieldComplex(((t_FieldComplex *) arg)->object.this$));
      }
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0, a1));
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

      static PyObject *t_FieldComplex_abs(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_asin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_cos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "KK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "KKI", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_exp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_floor(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getField(t_FieldComplex *self)
      {
        ::org::hipparchus::complex::FieldComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginary());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getInf(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getInf", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getNaN(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getNaN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getPi(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPi_", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getZero(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldComplex > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex a6((jobject) NULL);
            PyTypeObject **p6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_, &a6, &p6, t_FieldComplex::parameters_, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_, &a6, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_log(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log10(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_negate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg)
      {
        jdouble a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_rint(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_sign(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_tan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0));
              return t_FieldComplex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0, a1));
              return t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginary());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data)
      {
        FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonManeuverTriggersResetter::mids$ = NULL;
          bool PythonManeuverTriggersResetter::live$ = false;

          jclass PythonManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_b69b5541e48d21c0] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_ed3fe207e6fde26f] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggersResetter::PythonManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          void PythonManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_b69b5541e48d21c0], a0.this$, a1);
          }

          jlong PythonManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonManeuverTriggersResetter::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self);
          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggersResetter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggersResetter, t_PythonManeuverTriggersResetter, PythonManeuverTriggersResetter);

          void t_PythonManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggersResetter), &PY_TYPE_DEF(PythonManeuverTriggersResetter), module, "PythonManeuverTriggersResetter", 1);
          }

          void t_PythonManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "class_", make_descriptor(PythonManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggersResetter_pythonDecRef0 },
              { "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonManeuverTriggersResetter_resetState1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggersResetter::wrap_Object(PythonManeuverTriggersResetter(((t_PythonManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data)
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
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaturalRanking::class$ = NULL;
        jmethodID *NaturalRanking::mids$ = NULL;
        bool NaturalRanking::live$ = false;
        ::org::hipparchus::stat::ranking::NaNStrategy *NaturalRanking::DEFAULT_NAN_STRATEGY = NULL;
        ::org::hipparchus::stat::ranking::TiesStrategy *NaturalRanking::DEFAULT_TIES_STRATEGY = NULL;

        jclass NaturalRanking::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaturalRanking");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1a342cfb401ed671] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)V");
            mids$[mid_init$_d714e6bd58b104cb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_49a3c82f9e34fc75] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_45df11e9d865ae4f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getNanStrategy_7ad66d754bcf87e2] = env->getMethodID(cls, "getNanStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_getTiesStrategy_412886e0f6fc9df5] = env->getMethodID(cls, "getTiesStrategy", "()Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_rank_51f624c89851da7e] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_NAN_STRATEGY = new ::org::hipparchus::stat::ranking::NaNStrategy(env->getStaticObjectField(cls, "DEFAULT_NAN_STRATEGY", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            DEFAULT_TIES_STRATEGY = new ::org::hipparchus::stat::ranking::TiesStrategy(env->getStaticObjectField(cls, "DEFAULT_TIES_STRATEGY", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaturalRanking::NaturalRanking() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a342cfb401ed671, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d714e6bd58b104cb, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49a3c82f9e34fc75, a0.this$, a1.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45df11e9d865ae4f, a0.this$, a1.this$)) {}

        ::org::hipparchus::stat::ranking::NaNStrategy NaturalRanking::getNanStrategy() const
        {
          return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNanStrategy_7ad66d754bcf87e2]));
        }

        ::org::hipparchus::stat::ranking::TiesStrategy NaturalRanking::getTiesStrategy() const
        {
          return ::org::hipparchus::stat::ranking::TiesStrategy(env->callObjectMethod(this$, mids$[mid_getTiesStrategy_412886e0f6fc9df5]));
        }

        JArray< jdouble > NaturalRanking::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_51f624c89851da7e], a0.this$));
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
        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg);
        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data);
        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data);
        static PyGetSetDef t_NaturalRanking__fields_[] = {
          DECLARE_GET_FIELD(t_NaturalRanking, nanStrategy),
          DECLARE_GET_FIELD(t_NaturalRanking, tiesStrategy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaturalRanking__methods_[] = {
          DECLARE_METHOD(t_NaturalRanking, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, getNanStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, getTiesStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaturalRanking)[] = {
          { Py_tp_methods, t_NaturalRanking__methods_ },
          { Py_tp_init, (void *) t_NaturalRanking_init_ },
          { Py_tp_getset, t_NaturalRanking__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaturalRanking)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NaturalRanking, t_NaturalRanking, NaturalRanking);

        void t_NaturalRanking::install(PyObject *module)
        {
          installType(&PY_TYPE(NaturalRanking), &PY_TYPE_DEF(NaturalRanking), module, "NaturalRanking", 0);
        }

        void t_NaturalRanking::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "class_", make_descriptor(NaturalRanking::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "wrapfn_", make_descriptor(t_NaturalRanking::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaturalRanking::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_NAN_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(*NaturalRanking::DEFAULT_NAN_STRATEGY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_TIES_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(*NaturalRanking::DEFAULT_TIES_STRATEGY)));
        }

        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaturalRanking::initializeClass, 1)))
            return NULL;
          return t_NaturalRanking::wrap_Object(NaturalRanking(((t_NaturalRanking *) arg)->object.this$));
        }
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaturalRanking::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NaturalRanking object((jobject) NULL);

              INT_CALL(object = NaturalRanking());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::TiesStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
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

        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }

        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
        }

        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonStaticTransform.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonStaticTransform::class$ = NULL;
      jmethodID *PythonStaticTransform::mids$ = NULL;
      bool PythonStaticTransform::live$ = false;

      jclass PythonStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_4707295cf0323d2d] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_4d68cff5f6e4403a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_032312bdeb3f2f93] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStaticTransform::PythonStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonStaticTransform::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self);
      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data);
      static PyGetSetDef t_PythonStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStaticTransform, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStaticTransform)[] = {
        { Py_tp_methods, t_PythonStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonStaticTransform_init_ },
        { Py_tp_getset, t_PythonStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStaticTransform, t_PythonStaticTransform, PythonStaticTransform);

      void t_PythonStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStaticTransform), &PY_TYPE_DEF(PythonStaticTransform), module, "PythonStaticTransform", 1);
      }

      void t_PythonStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "class_", make_descriptor(PythonStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "wrapfn_", make_descriptor(t_PythonStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/StaticTransform;", (void *) t_PythonStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonStaticTransform::wrap_Object(PythonStaticTransform(((t_PythonStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::StaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::StaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data)
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
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *WeibullDistribution::class$ = NULL;
        jmethodID *WeibullDistribution::mids$ = NULL;
        bool WeibullDistribution::live$ = false;

        jclass WeibullDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/WeibullDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_9981f74b2d109da6] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WeibullDistribution::WeibullDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble WeibullDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble WeibullDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble WeibullDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble WeibullDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean WeibullDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble WeibullDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data);
        static PyGetSetDef t_WeibullDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalMean),
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_WeibullDistribution, scale),
          DECLARE_GET_FIELD(t_WeibullDistribution, shape),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportConnected),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WeibullDistribution__methods_[] = {
          DECLARE_METHOD(t_WeibullDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeibullDistribution)[] = {
          { Py_tp_methods, t_WeibullDistribution__methods_ },
          { Py_tp_init, (void *) t_WeibullDistribution_init_ },
          { Py_tp_getset, t_WeibullDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeibullDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(WeibullDistribution, t_WeibullDistribution, WeibullDistribution);

        void t_WeibullDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(WeibullDistribution), &PY_TYPE_DEF(WeibullDistribution), module, "WeibullDistribution", 0);
        }

        void t_WeibullDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "class_", make_descriptor(WeibullDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "wrapfn_", make_descriptor(t_WeibullDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeibullDistribution::initializeClass, 1)))
            return NULL;
          return t_WeibullDistribution::wrap_Object(WeibullDistribution(((t_WeibullDistribution *) arg)->object.this$));
        }
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeibullDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          WeibullDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = WeibullDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTAtmosphericDrag::class$ = NULL;
            jmethodID *DSSTAtmosphericDrag::mids$ = NULL;
            bool DSSTAtmosphericDrag::live$ = false;

            jclass DSSTAtmosphericDrag::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_50f6720994b70dff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/drag/DragForce;D)V");
                mids$[mid_init$_6c0cbcb3ef93ae28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;D)V");
                mids$[mid_init$_3dc53c05eb1b1dd7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;DDD)V");
                mids$[mid_getAtmosphere_427d0c98c647ebb8] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
                mids$[mid_getDrag_a2ccb814b74de707] = env->getMethodID(cls, "getDrag", "()Lorg/orekit/forces/drag/DragForce;");
                mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getRbar_9981f74b2d109da6] = env->getMethodID(cls, "getRbar", "()D");
                mids$[mid_getSpacecraft_e8bdc7a90adb886e] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");
                mids$[mid_getLLimits_5bf18b5e9ec57652] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_15451c899b8436e1] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_d751c1a57012b438] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce & a0, jdouble a1) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_50f6720994b70dff, a0.this$, a1)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, jdouble a2) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_6c0cbcb3ef93ae28, a0.this$, a1.this$, a2)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_3dc53c05eb1b1dd7, a0.this$, a1, a2, a3)) {}

            ::org::orekit::models::earth::atmosphere::Atmosphere DSSTAtmosphericDrag::getAtmosphere() const
            {
              return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_427d0c98c647ebb8]));
            }

            ::org::orekit::forces::drag::DragForce DSSTAtmosphericDrag::getDrag() const
            {
              return ::org::orekit::forces::drag::DragForce(env->callObjectMethod(this$, mids$[mid_getDrag_a2ccb814b74de707]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
            }

            jdouble DSSTAtmosphericDrag::getRbar() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRbar_9981f74b2d109da6]);
            }

            ::org::orekit::forces::drag::DragSensitive DSSTAtmosphericDrag::getSpacecraft() const
            {
              return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_e8bdc7a90adb886e]));
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
            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data);
            static PyGetSetDef t_DSSTAtmosphericDrag__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, atmosphere),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, drag),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, eventDetectors),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, rbar),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTAtmosphericDrag__methods_[] = {
              DECLARE_METHOD(t_DSSTAtmosphericDrag, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getAtmosphere, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getDrag, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getFieldEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getRbar, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTAtmosphericDrag)[] = {
              { Py_tp_methods, t_DSSTAtmosphericDrag__methods_ },
              { Py_tp_init, (void *) t_DSSTAtmosphericDrag_init_ },
              { Py_tp_getset, t_DSSTAtmosphericDrag__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTAtmosphericDrag)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTAtmosphericDrag, t_DSSTAtmosphericDrag, DSSTAtmosphericDrag);

            void t_DSSTAtmosphericDrag::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTAtmosphericDrag), &PY_TYPE_DEF(DSSTAtmosphericDrag), module, "DSSTAtmosphericDrag", 0);
            }

            void t_DSSTAtmosphericDrag::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "class_", make_descriptor(DSSTAtmosphericDrag::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "wrapfn_", make_descriptor(t_DSSTAtmosphericDrag::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTAtmosphericDrag::initializeClass, 1)))
                return NULL;
              return t_DSSTAtmosphericDrag::wrap_Object(DSSTAtmosphericDrag(((t_DSSTAtmosphericDrag *) arg)->object.this$));
            }
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTAtmosphericDrag::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::forces::drag::DragForce a0((jobject) NULL);
                  jdouble a1;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kD", ::org::orekit::forces::drag::DragForce::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
                  jdouble a2;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kkD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kDDD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2, a3));
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

            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragForce result((jobject) NULL);
              OBJ_CALL(result = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getEventDetectors());
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getFieldEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRbar());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragForce value((jobject) NULL);
              OBJ_CALL(value = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRbar());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternion::class$ = NULL;
              jmethodID *ApmQuaternion::mids$ = NULL;
              bool ApmQuaternion::live$ = false;

              jclass ApmQuaternion::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getQuaternion_c78679230082648b] = env->getMethodID(cls, "getQuaternion", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_getQuaternionDot_c78679230082648b] = env->getMethodID(cls, "getQuaternionDot", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_setQ_4320462275d66e78] = env->getMethodID(cls, "setQ", "(ID)V");
                  mids$[mid_setQDot_4320462275d66e78] = env->getMethodID(cls, "setQDot", "(ID)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmQuaternion::ApmQuaternion() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints ApmQuaternion::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternion() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternion_c78679230082648b]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternionDot() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionDot_c78679230082648b]));
              }

              jboolean ApmQuaternion::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
              }

              void ApmQuaternion::setQ(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQ_4320462275d66e78], a0, a1);
              }

              void ApmQuaternion::setQDot(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQDot_4320462275d66e78], a0, a1);
              }

              void ApmQuaternion::validate(jdouble a0) const
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
          namespace adm {
            namespace apm {
              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data);
              static PyGetSetDef t_ApmQuaternion__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternion, endpoints),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternion),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternionDot),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternion__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternion, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternion, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternionDot, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQ, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQDot, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternion)[] = {
                { Py_tp_methods, t_ApmQuaternion__methods_ },
                { Py_tp_init, (void *) t_ApmQuaternion_init_ },
                { Py_tp_getset, t_ApmQuaternion__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternion)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(ApmQuaternion, t_ApmQuaternion, ApmQuaternion);

              void t_ApmQuaternion::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternion), &PY_TYPE_DEF(ApmQuaternion), module, "ApmQuaternion", 0);
              }

              void t_ApmQuaternion::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "class_", make_descriptor(ApmQuaternion::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "wrapfn_", make_descriptor(t_ApmQuaternion::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternion::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternion::wrap_Object(ApmQuaternion(((t_ApmQuaternion *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternion::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds)
              {
                ApmQuaternion object((jobject) NULL);

                INT_CALL(object = ApmQuaternion());
                self->object = object;

                return 0;
              }

              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQ(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQ", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQDot(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQDot", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmQuaternion), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
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
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitType::class$ = NULL;
      jmethodID *OrbitType::mids$ = NULL;
      bool OrbitType::live$ = false;
      ::java::lang::String *OrbitType::A = NULL;
      OrbitType *OrbitType::CARTESIAN = NULL;
      OrbitType *OrbitType::CIRCULAR = NULL;
      ::java::lang::String *OrbitType::ECC = NULL;
      ::java::lang::String *OrbitType::ECC_ANOM = NULL;
      ::java::lang::String *OrbitType::ECC_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::ECC_LON_ARG = NULL;
      OrbitType *OrbitType::EQUINOCTIAL = NULL;
      ::java::lang::String *OrbitType::E_X = NULL;
      ::java::lang::String *OrbitType::E_Y = NULL;
      ::java::lang::String *OrbitType::H_X = NULL;
      ::java::lang::String *OrbitType::H_Y = NULL;
      ::java::lang::String *OrbitType::INC = NULL;
      OrbitType *OrbitType::KEPLERIAN = NULL;
      ::java::lang::String *OrbitType::MEAN_ANOM = NULL;
      ::java::lang::String *OrbitType::MEAN_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::MEAN_LON_ARG = NULL;
      ::java::lang::String *OrbitType::PA = NULL;
      ::java::lang::String *OrbitType::POS_X = NULL;
      ::java::lang::String *OrbitType::POS_Y = NULL;
      ::java::lang::String *OrbitType::POS_Z = NULL;
      ::java::lang::String *OrbitType::RAAN = NULL;
      ::java::lang::String *OrbitType::TRUE_ANOM = NULL;
      ::java::lang::String *OrbitType::TRUE_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::TRUE_LON_ARG = NULL;
      ::java::lang::String *OrbitType::VEL_X = NULL;
      ::java::lang::String *OrbitType::VEL_Y = NULL;
      ::java::lang::String *OrbitType::VEL_Z = NULL;

      jclass OrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToFieldOrbit_4e961aad065174c6] = env->getMethodID(cls, "convertToFieldOrbit", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_c568d451ffb1bb48] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_940029672edd5e92] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_getDrivers_d5afdace8d02a385] = env->getMethodID(cls, "getDrivers", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/utils/ParameterDriversList;");
          mids$[mid_isPositionAngleBased_eee3de00fe971136] = env->getMethodID(cls, "isPositionAngleBased", "()Z");
          mids$[mid_mapArrayToOrbit_87ad13bda478956b] = env->getMethodID(cls, "mapArrayToOrbit", "([D[DLorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/frames/Frame;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_mapArrayToOrbit_7b733a130aa7b2a9] = env->getMethodID(cls, "mapArrayToOrbit", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_mapOrbitToArray_359314ca0bd4c47b] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapOrbitToArray_7691d4a944c88f98] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[D[D)V");
          mids$[mid_normalize_ecfb098360a0b7b4] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_normalize_6a3479954288b344] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_valueOf_5c92cc24cbd933c4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/OrbitType;");
          mids$[mid_values_468e1e4121a628f0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/OrbitType;");
          mids$[mid_scale_4c37db72b1fcc356] = env->getMethodID(cls, "scale", "(DLorg/orekit/orbits/Orbit;)[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new ::java::lang::String(env->getStaticObjectField(cls, "A", "Ljava/lang/String;"));
          CARTESIAN = new OrbitType(env->getStaticObjectField(cls, "CARTESIAN", "Lorg/orekit/orbits/OrbitType;"));
          CIRCULAR = new OrbitType(env->getStaticObjectField(cls, "CIRCULAR", "Lorg/orekit/orbits/OrbitType;"));
          ECC = new ::java::lang::String(env->getStaticObjectField(cls, "ECC", "Ljava/lang/String;"));
          ECC_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_ANOM", "Ljava/lang/String;"));
          ECC_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LAT_ARG", "Ljava/lang/String;"));
          ECC_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LON_ARG", "Ljava/lang/String;"));
          EQUINOCTIAL = new OrbitType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/orbits/OrbitType;"));
          E_X = new ::java::lang::String(env->getStaticObjectField(cls, "E_X", "Ljava/lang/String;"));
          E_Y = new ::java::lang::String(env->getStaticObjectField(cls, "E_Y", "Ljava/lang/String;"));
          H_X = new ::java::lang::String(env->getStaticObjectField(cls, "H_X", "Ljava/lang/String;"));
          H_Y = new ::java::lang::String(env->getStaticObjectField(cls, "H_Y", "Ljava/lang/String;"));
          INC = new ::java::lang::String(env->getStaticObjectField(cls, "INC", "Ljava/lang/String;"));
          KEPLERIAN = new OrbitType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/orbits/OrbitType;"));
          MEAN_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_ANOM", "Ljava/lang/String;"));
          MEAN_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LAT_ARG", "Ljava/lang/String;"));
          MEAN_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LON_ARG", "Ljava/lang/String;"));
          PA = new ::java::lang::String(env->getStaticObjectField(cls, "PA", "Ljava/lang/String;"));
          POS_X = new ::java::lang::String(env->getStaticObjectField(cls, "POS_X", "Ljava/lang/String;"));
          POS_Y = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Y", "Ljava/lang/String;"));
          POS_Z = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Z", "Ljava/lang/String;"));
          RAAN = new ::java::lang::String(env->getStaticObjectField(cls, "RAAN", "Ljava/lang/String;"));
          TRUE_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_ANOM", "Ljava/lang/String;"));
          TRUE_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LAT_ARG", "Ljava/lang/String;"));
          TRUE_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LON_ARG", "Ljava/lang/String;"));
          VEL_X = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_X", "Ljava/lang/String;"));
          VEL_Y = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Y", "Ljava/lang/String;"));
          VEL_Z = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Z", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertToFieldOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertToFieldOrbit_4e961aad065174c6], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertType(const ::org::orekit::orbits::FieldOrbit & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertType_c568d451ffb1bb48], a0.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::convertType(const ::org::orekit::orbits::Orbit & a0) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_convertType_940029672edd5e92], a0.this$));
      }

      ::org::orekit::utils::ParameterDriversList OrbitType::getDrivers(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getDrivers_d5afdace8d02a385], a0, a1.this$, a2.this$));
      }

      jboolean OrbitType::isPositionAngleBased() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPositionAngleBased_eee3de00fe971136]);
      }

      ::org::orekit::orbits::Orbit OrbitType::mapArrayToOrbit(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_87ad13bda478956b], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_7b733a130aa7b2a9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_359314ca0bd4c47b], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_7691d4a944c88f98], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::normalize(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::FieldOrbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_normalize_ecfb098360a0b7b4], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::normalize(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_normalize_6a3479954288b344], a0.this$, a1.this$));
      }

      OrbitType OrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5c92cc24cbd933c4], a0.this$));
      }

      JArray< OrbitType > OrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_468e1e4121a628f0]));
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
      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self);
      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrbitType_values(PyTypeObject *type);
      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data);
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data);
      static PyGetSetDef t_OrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitType, positionAngleBased),
        DECLARE_GET_FIELD(t_OrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitType__methods_[] = {
        DECLARE_METHOD(t_OrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertToFieldOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertType, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, getDrivers, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, isPositionAngleBased, METH_NOARGS),
        DECLARE_METHOD(t_OrbitType, mapArrayToOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, mapOrbitToArray, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, normalize, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitType)[] = {
        { Py_tp_methods, t_OrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrbitType, t_OrbitType, OrbitType);
      PyObject *t_OrbitType::wrap_Object(const OrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitType), &PY_TYPE_DEF(OrbitType), module, "OrbitType", 0);
      }

      void t_OrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "class_", make_descriptor(OrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "wrapfn_", make_descriptor(t_OrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "A", make_descriptor(j2p(*OrbitType::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CARTESIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CARTESIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CIRCULAR", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CIRCULAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC", make_descriptor(j2p(*OrbitType::ECC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_ANOM", make_descriptor(j2p(*OrbitType::ECC_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LAT_ARG", make_descriptor(j2p(*OrbitType::ECC_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LON_ARG", make_descriptor(j2p(*OrbitType::ECC_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "EQUINOCTIAL", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_X", make_descriptor(j2p(*OrbitType::E_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_Y", make_descriptor(j2p(*OrbitType::E_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_X", make_descriptor(j2p(*OrbitType::H_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_Y", make_descriptor(j2p(*OrbitType::H_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "INC", make_descriptor(j2p(*OrbitType::INC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "KEPLERIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::KEPLERIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_ANOM", make_descriptor(j2p(*OrbitType::MEAN_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LAT_ARG", make_descriptor(j2p(*OrbitType::MEAN_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LON_ARG", make_descriptor(j2p(*OrbitType::MEAN_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "PA", make_descriptor(j2p(*OrbitType::PA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_X", make_descriptor(j2p(*OrbitType::POS_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Y", make_descriptor(j2p(*OrbitType::POS_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Z", make_descriptor(j2p(*OrbitType::POS_Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "RAAN", make_descriptor(j2p(*OrbitType::RAAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_ANOM", make_descriptor(j2p(*OrbitType::TRUE_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LAT_ARG", make_descriptor(j2p(*OrbitType::TRUE_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LON_ARG", make_descriptor(j2p(*OrbitType::TRUE_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_X", make_descriptor(j2p(*OrbitType::VEL_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Y", make_descriptor(j2p(*OrbitType::VEL_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Z", make_descriptor(j2p(*OrbitType::VEL_Z)));
      }

      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitType::initializeClass, 1)))
          return NULL;
        return t_OrbitType::wrap_Object(OrbitType(((t_OrbitType *) arg)->object.this$));
      }
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.convertToFieldOrbit(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertToFieldOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertType", args);
        return NULL;
      }

      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

        if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getDrivers(a0, a1, a2));
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDrivers", args);
        return NULL;
      }

      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 6:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            jdouble a4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "[D[DKkDk", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "[K[KKKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapArrayToOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);

            if (!parseArgs(args, "kK[D[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KK[K[K", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapOrbitToArray", args);
        return NULL;
      }

      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "normalize", args);
        return NULL;
      }

      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::OrbitType::valueOf(a0));
          return t_OrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrbitType_values(PyTypeObject *type)
      {
        JArray< OrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::OrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_OrbitType::wrap_jobject);
      }
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarD::class$ = NULL;
          jmethodID *FieldCopolarD::mids$ = NULL;
          bool FieldCopolarD::live$ = false;

          jclass FieldCopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_08d37e3f77b7239d] = env->getMethodID(cls, "cd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nd_08d37e3f77b7239d] = env->getMethodID(cls, "nd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sd_08d37e3f77b7239d] = env->getMethodID(cls, "sd", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::cd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cd_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::nd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nd_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::sd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sd_08d37e3f77b7239d]));
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
          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args);
          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data);
          static PyGetSetDef t_FieldCopolarD__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarD, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarD__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarD)[] = {
            { Py_tp_methods, t_FieldCopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarD__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarD, t_FieldCopolarD, FieldCopolarD);
          PyObject *t_FieldCopolarD::wrap_Object(const FieldCopolarD& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarD::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarD), &PY_TYPE_DEF(FieldCopolarD), module, "FieldCopolarD", 0);
          }

          void t_FieldCopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "class_", make_descriptor(FieldCopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "wrapfn_", make_descriptor(t_FieldCopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarD::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarD::wrap_Object(FieldCopolarD(((t_FieldCopolarD *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data)
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
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation::class$ = NULL;
      jmethodID *HelmertTransformation::mids$ = NULL;
      bool HelmertTransformation::live$ = false;

      jclass HelmertTransformation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c661e973f2425711] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDD)V");
          mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HelmertTransformation::HelmertTransformation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c661e973f2425711, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)) {}

      ::org::orekit::time::AbsoluteDate HelmertTransformation::getEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
      }

      ::org::orekit::frames::StaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      ::org::orekit::frames::Transform HelmertTransformation::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform HelmertTransformation::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self);
      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data);
      static PyGetSetDef t_HelmertTransformation__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation, epoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, getEpoch, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation)[] = {
        { Py_tp_methods, t_HelmertTransformation__methods_ },
        { Py_tp_init, (void *) t_HelmertTransformation_init_ },
        { Py_tp_getset, t_HelmertTransformation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation, t_HelmertTransformation, HelmertTransformation);

      void t_HelmertTransformation::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation), &PY_TYPE_DEF(HelmertTransformation), module, "HelmertTransformation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "Predefined", make_descriptor(&PY_TYPE_DEF(HelmertTransformation$Predefined)));
      }

      void t_HelmertTransformation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "class_", make_descriptor(HelmertTransformation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "wrapfn_", make_descriptor(t_HelmertTransformation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation::wrap_Object(HelmertTransformation(((t_HelmertTransformation *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        HelmertTransformation object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
        {
          INT_CALL(object = HelmertTransformation(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args)
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

      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args)
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
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *IOException::class$ = NULL;
    jmethodID *IOException::mids$ = NULL;
    bool IOException::live$ = false;

    jclass IOException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/IOException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IOException::IOException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    IOException::IOException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    IOException::IOException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    IOException::IOException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IOException__methods_[] = {
      DECLARE_METHOD(t_IOException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IOException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IOException)[] = {
      { Py_tp_methods, t_IOException__methods_ },
      { Py_tp_init, (void *) t_IOException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IOException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(IOException, t_IOException, IOException);

    void t_IOException::install(PyObject *module)
    {
      installType(&PY_TYPE(IOException), &PY_TYPE_DEF(IOException), module, "IOException", 0);
    }

    void t_IOException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "class_", make_descriptor(IOException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "wrapfn_", make_descriptor(t_IOException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IOException::initializeClass, 1)))
        return NULL;
      return t_IOException::wrap_Object(IOException(((t_IOException *) arg)->object.this$));
    }
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IOException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IOException object((jobject) NULL);

          INT_CALL(object = IOException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IOException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *PreconditionedIterativeLinearSolver::class$ = NULL;
      jmethodID *PreconditionedIterativeLinearSolver::mids$ = NULL;
      bool PreconditionedIterativeLinearSolver::live$ = false;

      jclass PreconditionedIterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/PreconditionedIterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_825e5a57590da83c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_solve_0cdb2b64c2fd2ee5] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0299ee26edcac320] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_9820092a50d54355] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_35226d9fdc897ac0] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_0299ee26edcac320] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_35226d9fdc897ac0] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_b3d45b3939216c0b] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_825e5a57590da83c, a0.this$)) {}

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(jint a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0cdb2b64c2fd2ee5], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_9820092a50d54355], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_35226d9fdc897ac0], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_35226d9fdc897ac0], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args);
      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args);

      static PyMethodDef t_PreconditionedIterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PreconditionedIterativeLinearSolver)[] = {
        { Py_tp_methods, t_PreconditionedIterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_PreconditionedIterativeLinearSolver_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PreconditionedIterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(PreconditionedIterativeLinearSolver, t_PreconditionedIterativeLinearSolver, PreconditionedIterativeLinearSolver);

      void t_PreconditionedIterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(PreconditionedIterativeLinearSolver), &PY_TYPE_DEF(PreconditionedIterativeLinearSolver), module, "PreconditionedIterativeLinearSolver", 0);
      }

      void t_PreconditionedIterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "class_", make_descriptor(PreconditionedIterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "wrapfn_", make_descriptor(t_PreconditionedIterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_PreconditionedIterativeLinearSolver::wrap_Object(PreconditionedIterativeLinearSolver(((t_PreconditionedIterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
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

      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions::class$ = NULL;
      jmethodID *IERSConventions::mids$ = NULL;
      bool IERSConventions::live$ = false;
      IERSConventions *IERSConventions::IERS_1996 = NULL;
      IERSConventions *IERSConventions::IERS_2003 = NULL;
      IERSConventions *IERSConventions::IERS_2010 = NULL;

      jclass IERSConventions::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluateTC_209f08246d708042] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_evaluateTC_cf010978f3c5a913] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluateTC_bbe0b057411e7e27] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScales;)D");
          mids$[mid_evaluateTC_277c7bbd90f0a124] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScales;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEOPTidalCorrection_d0fbc44798d116db] = env->getMethodID(cls, "getEOPTidalCorrection", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEOPTidalCorrection_f828c350c2e39525] = env->getMethodID(cls, "getEOPTidalCorrection", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEarthOrientationAngleFunction_499ded7cb53db9bd] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getEarthOrientationAngleFunction_affc6cc1169889dd] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_8b64e041a5e0388e] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_1626b3d2726f4d1e] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_499ded7cb53db9bd] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_d77fa2ba48456639] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_499ded7cb53db9bd] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_d77fa2ba48456639] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getLoveNumbers_4076340cb4c36742] = env->getMethodID(cls, "getLoveNumbers", "()Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getMeanObliquityFunction_852c4d611f1539e1] = env->getMethodID(cls, "getMeanObliquityFunction", "()Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getMeanObliquityFunction_86b1207feab51856] = env->getMethodID(cls, "getMeanObliquityFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getNominalTidalDisplacement_be783177b060994b] = env->getMethodID(cls, "getNominalTidalDisplacement", "()[D");
          mids$[mid_getNutationArguments_00942b6d25526230] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationArguments_3e424896261f205c] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationCorrectionConverter_55a099913f3c39f3] = env->getMethodID(cls, "getNutationCorrectionConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationCorrectionConverter_a4c3846c69ac5e93] = env->getMethodID(cls, "getNutationCorrectionConverter", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationFunction_d0fbc44798d116db] = env->getMethodID(cls, "getNutationFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationFunction_f828c350c2e39525] = env->getMethodID(cls, "getNutationFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationReferenceEpoch_80e11148db499dda] = env->getMethodID(cls, "getNutationReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNutationReferenceEpoch_86a997abceb04f2f] = env->getMethodID(cls, "getNutationReferenceEpoch", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOceanPoleTide_767e6a3ea53f5e8d] = env->getMethodID(cls, "getOceanPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPermanentTide_9981f74b2d109da6] = env->getMethodID(cls, "getPermanentTide", "()D");
          mids$[mid_getPrecessionFunction_d0fbc44798d116db] = env->getMethodID(cls, "getPrecessionFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPrecessionFunction_f828c350c2e39525] = env->getMethodID(cls, "getPrecessionFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getSolidPoleTide_767e6a3ea53f5e8d] = env->getMethodID(cls, "getSolidPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_72d427a453e47630] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_72d427a453e47630] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTideFrequencyDependenceFunction_c1b86ad8a5d13d9a] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTideFrequencyDependenceFunction_a4c6028f6347cda2] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_d0fbc44798d116db] = env->getMethodID(cls, "getXYSpXY2Function", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_f828c350c2e39525] = env->getMethodID(cls, "getXYSpXY2Function", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_valueOf_b3af8c2e23e77c76] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/IERSConventions;");
          mids$[mid_values_6bc294c95c1c1e26] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getNutationArguments_f94597bf31ed7b30] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_abe88ad790ab75ad] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_abe88ad790ab75ad] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_loadLoveNumbers_21063114c4eb1f07] = env->getMethodID(cls, "loadLoveNumbers", "(Ljava/lang/String;)Lorg/orekit/utils/LoveNumbers;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IERS_1996 = new IERSConventions(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2003 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2010 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/utils/IERSConventions;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_cf010978f3c5a913], a0.this$));
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_bbe0b057411e7e27], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_277c7bbd90f0a124], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_d0fbc44798d116db]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_f828c350c2e39525], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_499ded7cb53db9bd], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_affc6cc1169889dd], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_8b64e041a5e0388e], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_1626b3d2726f4d1e], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_499ded7cb53db9bd], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_d77fa2ba48456639], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_499ded7cb53db9bd], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_d77fa2ba48456639], a0.this$, a1.this$));
      }

      ::org::orekit::utils::LoveNumbers IERSConventions::getLoveNumbers() const
      {
        return ::org::orekit::utils::LoveNumbers(env->callObjectMethod(this$, mids$[mid_getLoveNumbers_4076340cb4c36742]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction() const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_852c4d611f1539e1]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_86b1207feab51856], a0.this$));
      }

      JArray< jdouble > IERSConventions::getNominalTidalDisplacement() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNominalTidalDisplacement_be783177b060994b]));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_00942b6d25526230], a0.this$));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_3e424896261f205c], a0.this$, a1.this$));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter() const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_55a099913f3c39f3]));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_a4c3846c69ac5e93], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_d0fbc44798d116db]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_f828c350c2e39525], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_86a997abceb04f2f], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getOceanPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getOceanPoleTide_767e6a3ea53f5e8d], a0.this$));
      }

      jdouble IERSConventions::getPermanentTide() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPermanentTide_9981f74b2d109da6]);
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_d0fbc44798d116db]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_f828c350c2e39525], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getSolidPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getSolidPoleTide_767e6a3ea53f5e8d], a0.this$));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionDiurnal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_72d427a453e47630]));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionZonal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_72d427a453e47630]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_c1b86ad8a5d13d9a], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_a4c6028f6347cda2], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_d0fbc44798d116db]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_f828c350c2e39525], a0.this$));
      }

      IERSConventions IERSConventions::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return IERSConventions(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b3af8c2e23e77c76], a0.this$));
      }

      JArray< IERSConventions > IERSConventions::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< IERSConventions >(env->callStaticObjectMethod(cls, mids$[mid_values_6bc294c95c1c1e26]));
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
      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_IERSConventions_values(PyTypeObject *type);
      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data);
      static PyGetSetDef t_IERSConventions__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions, eOPTidalCorrection),
        DECLARE_GET_FIELD(t_IERSConventions, loveNumbers),
        DECLARE_GET_FIELD(t_IERSConventions, meanObliquityFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nominalTidalDisplacement),
        DECLARE_GET_FIELD(t_IERSConventions, nutationCorrectionConverter),
        DECLARE_GET_FIELD(t_IERSConventions, nutationFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nutationReferenceEpoch),
        DECLARE_GET_FIELD(t_IERSConventions, permanentTide),
        DECLARE_GET_FIELD(t_IERSConventions, precessionFunction),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionDiurnal),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionZonal),
        DECLARE_GET_FIELD(t_IERSConventions, xYSpXY2Function),
        DECLARE_GET_FIELD(t_IERSConventions, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions__methods_[] = {
        DECLARE_METHOD(t_IERSConventions, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, evaluateTC, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEOPTidalCorrection, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEarthOrientationAngleFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGASTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTRateFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getLoveNumbers, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getMeanObliquityFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNominalTidalDisplacement, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationArguments, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationCorrectionConverter, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationReferenceEpoch, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getOceanPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getPermanentTide, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getPrecessionFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getSolidPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionDiurnal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionZonal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTideFrequencyDependenceFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getXYSpXY2Function, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions)[] = {
        { Py_tp_methods, t_IERSConventions__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(IERSConventions, t_IERSConventions, IERSConventions);
      PyObject *t_IERSConventions::wrap_Object(const IERSConventions& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions), &PY_TYPE_DEF(IERSConventions), module, "IERSConventions", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "NutationCorrectionConverter", make_descriptor(&PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter)));
      }

      void t_IERSConventions::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "class_", make_descriptor(IERSConventions::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "wrapfn_", make_descriptor(t_IERSConventions::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "boxfn_", make_descriptor(boxObject));
        env->getClass(IERSConventions::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_1996", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2003", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2010", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2010)));
      }

      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions::initializeClass, 1)))
          return NULL;
        return t_IERSConventions::wrap_Object(IERSConventions(((t_IERSConventions *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateTC", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getEOPTidalCorrection());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEOPTidalCorrection(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPTidalCorrection", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEarthOrientationAngleFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1, a2));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGASTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTRateFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self)
      {
        ::org::orekit::utils::LoveNumbers result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanObliquityFunction());
            return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanObliquityFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMeanObliquityFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getNominalTidalDisplacement());
        return result.wrap();
      }

      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0, a1));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationArguments", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationCorrectionConverter());
            return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationCorrectionConverter(a0));
              return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationCorrectionConverter", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationReferenceEpoch(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationReferenceEpoch", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getOceanPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getOceanPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrecessionFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrecessionFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrecessionFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSolidPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSolidPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0, a1));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTideFrequencyDependenceFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getXYSpXY2Function());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXYSpXY2Function(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getXYSpXY2Function", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        IERSConventions result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::IERSConventions::valueOf(a0));
          return t_IERSConventions::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_IERSConventions_values(PyTypeObject *type)
      {
        JArray< IERSConventions > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::IERSConventions::values());
        return JArray<jobject>(result.this$).wrap(t_IERSConventions::wrap_jobject);
      }
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPTidalCorrection());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::LoveNumbers value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeScalarFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanObliquityFunction());
        return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getNominalTidalDisplacement());
        return value.wrap();
      }

      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationCorrectionConverter());
        return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationReferenceEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrecessionFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getXYSpXY2Function());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPConstants::class$ = NULL;
          jmethodID *CR3BPConstants::mids$ = NULL;
          bool CR3BPConstants::live$ = false;

          jclass CR3BPConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPConstants");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEarthMoonBarycenterSemiMajorAxis_5168f1ade9606d8a] = env->getStaticMethodID(cls, "getEarthMoonBarycenterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getJupiterSemiMajorAxis_5168f1ade9606d8a] = env->getStaticMethodID(cls, "getJupiterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getMoonSemiMajorAxis_9981f74b2d109da6] = env->getStaticMethodID(cls, "getMoonSemiMajorAxis", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getEarthMoonBarycenterSemiMajorAxis_5168f1ade9606d8a], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getJupiterSemiMajorAxis_5168f1ade9606d8a], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getMoonSemiMajorAxis()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMoonSemiMajorAxis_9981f74b2d109da6]);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type);
          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data);
          static PyGetSetDef t_CR3BPConstants__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPConstants, moonSemiMajorAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPConstants__methods_[] = {
            DECLARE_METHOD(t_CR3BPConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getEarthMoonBarycenterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getJupiterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getMoonSemiMajorAxis, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPConstants)[] = {
            { Py_tp_methods, t_CR3BPConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CR3BPConstants__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPConstants, t_CR3BPConstants, CR3BPConstants);

          void t_CR3BPConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPConstants), &PY_TYPE_DEF(CR3BPConstants), module, "CR3BPConstants", 0);
          }

          void t_CR3BPConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "class_", make_descriptor(CR3BPConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "wrapfn_", make_descriptor(t_CR3BPConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPConstants::initializeClass, 1)))
              return NULL;
            return t_CR3BPConstants::wrap_Object(CR3BPConstants(((t_CR3BPConstants *) arg)->object.this$));
          }
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getEarthMoonBarycenterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getJupiterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getJupiterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *RadiationSensitive::class$ = NULL;
        jmethodID *RadiationSensitive::mids$ = NULL;
        bool RadiationSensitive::live$ = false;
        ::java::lang::String *RadiationSensitive::ABSORPTION_COEFFICIENT = NULL;
        ::java::lang::String *RadiationSensitive::GLOBAL_RADIATION_FACTOR = NULL;
        ::java::lang::String *RadiationSensitive::REFLECTION_COEFFICIENT = NULL;

        jclass RadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/RadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABSORPTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ABSORPTION_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_RADIATION_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_RADIATION_FACTOR", "Ljava/lang/String;"));
            REFLECTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "REFLECTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List RadiationSensitive::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_d751c1a57012b438]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D RadiationSensitive::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self);
        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args);
        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data);
        static PyGetSetDef t_RadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_RadiationSensitive, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_RadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RadiationSensitive, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_RadiationSensitive, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RadiationSensitive)[] = {
          { Py_tp_methods, t_RadiationSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RadiationSensitive, t_RadiationSensitive, RadiationSensitive);

        void t_RadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(RadiationSensitive), &PY_TYPE_DEF(RadiationSensitive), module, "RadiationSensitive", 0);
        }

        void t_RadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "class_", make_descriptor(RadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "wrapfn_", make_descriptor(t_RadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(RadiationSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "ABSORPTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::ABSORPTION_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "GLOBAL_RADIATION_FACTOR", make_descriptor(j2p(*RadiationSensitive::GLOBAL_RADIATION_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RadiationSensitive), "REFLECTION_COEFFICIENT", make_descriptor(j2p(*RadiationSensitive::REFLECTION_COEFFICIENT)));
        }

        static PyObject *t_RadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_RadiationSensitive::wrap_Object(RadiationSensitive(((t_RadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_RadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RadiationSensitive_getRadiationParametersDrivers(t_RadiationSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_RadiationSensitive_radiationPressureAcceleration(t_RadiationSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
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
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_RadiationSensitive_get__radiationParametersDrivers(t_RadiationSensitive *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSegment::class$ = NULL;
              jmethodID *OemSegment::mids$ = NULL;
              bool OemSegment::live$ = false;

              jclass OemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b6f57e51ec8f5dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/ndm/odm/oem/OemData;D)V");
                  mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_d751c1a57012b438] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSegment::OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData & a1, jdouble a2) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_b6f57e51ec8f5dae, a0.this$, a1.this$, a2)) {}

              ::org::orekit::utils::CartesianDerivativesFilter OemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
              }

              ::java::util::List OemSegment::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
              }

              ::java::util::List OemSegment::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_d751c1a57012b438]));
              }

              ::org::orekit::frames::Frame OemSegment::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
              }

              ::org::orekit::frames::Frame OemSegment::getInertialFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
              }

              jint OemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
              }

              jdouble OemSegment::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args);
              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self);
              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self);
              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self);
              static PyObject *t_OemSegment_getFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self);
              static PyObject *t_OemSegment_getMu(t_OemSegment *self);
              static PyObject *t_OemSegment_getStart(t_OemSegment *self);
              static PyObject *t_OemSegment_getStop(t_OemSegment *self);
              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data);
              static PyGetSetDef t_OemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_OemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_OemSegment, coordinates),
                DECLARE_GET_FIELD(t_OemSegment, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemSegment, frame),
                DECLARE_GET_FIELD(t_OemSegment, inertialFrame),
                DECLARE_GET_FIELD(t_OemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_OemSegment, mu),
                DECLARE_GET_FIELD(t_OemSegment, start),
                DECLARE_GET_FIELD(t_OemSegment, stop),
                DECLARE_GET_FIELD(t_OemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSegment__methods_[] = {
                DECLARE_METHOD(t_OemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInertialFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSegment)[] = {
                { Py_tp_methods, t_OemSegment__methods_ },
                { Py_tp_init, (void *) t_OemSegment_init_ },
                { Py_tp_getset, t_OemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(OemSegment, t_OemSegment, OemSegment);
              PyObject *t_OemSegment::wrap_Object(const OemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSegment), &PY_TYPE_DEF(OemSegment), module, "OemSegment", 0);
              }

              void t_OemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "class_", make_descriptor(OemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "wrapfn_", make_descriptor(t_OemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSegment::initializeClass, 1)))
                  return NULL;
                return t_OemSegment::wrap_Object(OemSegment(((t_OemSegment *) arg)->object.this$));
              }
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemData a1((jobject) NULL);
                jdouble a2;
                OemSegment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemData::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = OemSegment(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemSegment_getFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemSegment_getMu(t_OemSegment *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSegment_getStart(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getStop(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere::class$ = NULL;
        jmethodID *InterpolatingMicrosphere::mids$ = NULL;
        bool InterpolatingMicrosphere::live$ = false;

        jclass InterpolatingMicrosphere::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_582e32e2d074b21a] = env->getMethodID(cls, "<init>", "(IIDDDLorg/hipparchus/random/UnitSphereRandomVectorGenerator;)V");
            mids$[mid_copy_8b1de7d914573862] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_value_491d6bf7da84505c] = env->getMethodID(cls, "value", "([D[[D[DDD)D");
            mids$[mid_add_d202a20516e33d93] = env->getMethodID(cls, "add", "([DZ)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere::InterpolatingMicrosphere(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_582e32e2d074b21a, a0, a1, a2, a3, a4, a5.this$)) {}

        InterpolatingMicrosphere InterpolatingMicrosphere::copy() const
        {
          return InterpolatingMicrosphere(env->callObjectMethod(this$, mids$[mid_copy_8b1de7d914573862]));
        }

        jint InterpolatingMicrosphere::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        jint InterpolatingMicrosphere::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_d6ab429752e7c267]);
        }

        jdouble InterpolatingMicrosphere::value(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< jdouble > & a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_491d6bf7da84505c], a0.this$, a1.this$, a2.this$, a3, a4);
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
        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args);
        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data);
        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data);
        static PyGetSetDef t_InterpolatingMicrosphere__fields_[] = {
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, dimension),
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterpolatingMicrosphere__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, copy, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getSize, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere_init_ },
          { Py_tp_getset, t_InterpolatingMicrosphere__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere, t_InterpolatingMicrosphere, InterpolatingMicrosphere);

        void t_InterpolatingMicrosphere::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere), &PY_TYPE_DEF(InterpolatingMicrosphere), module, "InterpolatingMicrosphere", 0);
        }

        void t_InterpolatingMicrosphere::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "class_", make_descriptor(InterpolatingMicrosphere::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere::wrap_Object(InterpolatingMicrosphere(((t_InterpolatingMicrosphere *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::random::UnitSphereRandomVectorGenerator a5((jobject) NULL);
          InterpolatingMicrosphere object((jobject) NULL);

          if (!parseArgs(args, "IIDDDk", ::org::hipparchus::random::UnitSphereRandomVectorGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = InterpolatingMicrosphere(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self)
        {
          InterpolatingMicrosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_InterpolatingMicrosphere::wrap_Object(result);
        }

        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble result;

          if (!parseArgs(args, "[D[[D[DDD", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Position::class$ = NULL;
        jmethodID *Position::mids$ = NULL;
        bool Position::live$ = false;
        ::java::lang::String *Position::MEASUREMENT_TYPE = NULL;

        jclass Position::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Position");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_60260ec0a1e95694] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_c435632ebf63e121] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_d2c02a7162394c9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_eda3f19b8225f78f] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_eda3f19b8225f78f] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_60260ec0a1e95694, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< JArray< jdouble > > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c435632ebf63e121, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d2c02a7162394c9f, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        JArray< JArray< jdouble > > Position::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_eda3f19b8225f78f]));
        }

        JArray< JArray< jdouble > > Position::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_eda3f19b8225f78f]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Position::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
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
        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_of_(t_Position *self, PyObject *args);
        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self);
        static PyObject *t_Position_getCovarianceMatrix(t_Position *self);
        static PyObject *t_Position_getPosition(t_Position *self);
        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__position(t_Position *self, void *data);
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data);
        static PyGetSetDef t_Position__fields_[] = {
          DECLARE_GET_FIELD(t_Position, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_Position, covarianceMatrix),
          DECLARE_GET_FIELD(t_Position, position),
          DECLARE_GET_FIELD(t_Position, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Position__methods_[] = {
          DECLARE_METHOD(t_Position, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, of_, METH_VARARGS),
          DECLARE_METHOD(t_Position, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getPosition, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Position)[] = {
          { Py_tp_methods, t_Position__methods_ },
          { Py_tp_init, (void *) t_Position_init_ },
          { Py_tp_getset, t_Position__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Position)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(Position, t_Position, Position);
        PyObject *t_Position::wrap_Object(const Position& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Position::install(PyObject *module)
        {
          installType(&PY_TYPE(Position), &PY_TYPE_DEF(Position), module, "Position", 0);
        }

        void t_Position::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "class_", make_descriptor(Position::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "wrapfn_", make_descriptor(t_Position::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "boxfn_", make_descriptor(boxObject));
          env->getClass(Position::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "MEASUREMENT_TYPE", make_descriptor(j2p(*Position::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Position::initializeClass, 1)))
            return NULL;
          return t_Position::wrap_Object(Position(((t_Position *) arg)->object.this$));
        }
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Position::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Position_of_(t_Position *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getCovarianceMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getPosition(t_Position *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__position(t_Position *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmData::class$ = NULL;
              jmethodID *OpmData::mids$ = NULL;
              bool OpmData::live$ = false;

              jclass OpmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f4ead9c0c743c5d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_2b28f441350fd9e6] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_4af716cba10d823b] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getManeuver_20fdf787b4d48b4b] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_d751c1a57012b438] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getNbManeuvers_d6ab429752e7c267] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getSpacecraftParametersBlock_36c0b14eddf66774] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getStateVectorBlock_a573c85f4a837535] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/odm/StateVector;");
                  mids$[mid_getUserDefinedBlock_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_hasManeuvers_eee3de00fe971136] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmData::OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector & a0, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::java::util::List & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4ead9c0c743c5d5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OpmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_2b28f441350fd9e6]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OpmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_4af716cba10d823b]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver OpmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_20fdf787b4d48b4b], a0));
              }

              ::java::util::List OpmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_d751c1a57012b438]));
              }

              jdouble OpmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
              }

              jint OpmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OpmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_36c0b14eddf66774]));
              }

              ::org::orekit::files::ccsds::ndm::odm::StateVector OpmData::getStateVectorBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_a573c85f4a837535]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OpmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_b8dba07746e1b089]));
              }

              jboolean OpmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_eee3de00fe971136]);
              }

              void OpmData::validate(jdouble a0) const
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
            namespace opm {
              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self);
              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self);
              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_getManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getMass(t_OpmData *self);
              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self);
              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self);
              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self);
              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data);
              static PyGetSetDef t_OpmData__fields_[] = {
                DECLARE_GET_FIELD(t_OpmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OpmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OpmData, maneuvers),
                DECLARE_GET_FIELD(t_OpmData, mass),
                DECLARE_GET_FIELD(t_OpmData, nbManeuvers),
                DECLARE_GET_FIELD(t_OpmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OpmData, stateVectorBlock),
                DECLARE_GET_FIELD(t_OpmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmData__methods_[] = {
                DECLARE_METHOD(t_OpmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getManeuver, METH_O),
                DECLARE_METHOD(t_OpmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getStateVectorBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmData)[] = {
                { Py_tp_methods, t_OpmData__methods_ },
                { Py_tp_init, (void *) t_OpmData_init_ },
                { Py_tp_getset, t_OpmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OpmData, t_OpmData, OpmData);

              void t_OpmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmData), &PY_TYPE_DEF(OpmData), module, "OpmData", 0);
              }

              void t_OpmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "class_", make_descriptor(OpmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "wrapfn_", make_descriptor(t_OpmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmData::initializeClass, 1)))
                  return NULL;
                return t_OpmData::wrap_Object(OpmData(((t_OpmData *) arg)->object.this$));
              }
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::java::util::List a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                jdouble a6;
                OpmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkKkD", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6))
                {
                  INT_CALL(object = OpmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_OpmData_getManeuvers(t_OpmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_OpmData_getMass(t_OpmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector result((jobject) NULL);
                OBJ_CALL(result = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(result);
              }

              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector value((jobject) NULL);
                OBJ_CALL(value = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/Bias.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *Bias::class$ = NULL;
          jmethodID *Bias::mids$ = NULL;
          bool Bias::live$ = false;

          jclass Bias::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/Bias");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b03b861fc4ed7007] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;[D[D[D[D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Bias::Bias(const JArray< ::java::lang::String > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b03b861fc4ed7007, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::java::util::List Bias::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void Bias::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void Bias::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args);
          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Bias_getParametersDrivers(t_Bias *self);
          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data);
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data);
          static PyGetSetDef t_Bias__fields_[] = {
            DECLARE_GET_FIELD(t_Bias, parametersDrivers),
            DECLARE_GET_FIELD(t_Bias, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Bias__methods_[] = {
            DECLARE_METHOD(t_Bias, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, of_, METH_VARARGS),
            DECLARE_METHOD(t_Bias, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_Bias, modify, METH_O),
            DECLARE_METHOD(t_Bias, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Bias)[] = {
            { Py_tp_methods, t_Bias__methods_ },
            { Py_tp_init, (void *) t_Bias_init_ },
            { Py_tp_getset, t_Bias__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Bias)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Bias, t_Bias, Bias);
          PyObject *t_Bias::wrap_Object(const Bias& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Bias::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Bias::install(PyObject *module)
          {
            installType(&PY_TYPE(Bias), &PY_TYPE_DEF(Bias), module, "Bias", 0);
          }

          void t_Bias::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "class_", make_descriptor(Bias::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "wrapfn_", make_descriptor(t_Bias::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Bias::initializeClass, 1)))
              return NULL;
            return t_Bias::wrap_Object(Bias(((t_Bias *) arg)->object.this$));
          }
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Bias::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds)
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            Bias object((jobject) NULL);

            if (!parseArgs(args, "[s[D[D[D[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Bias(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Bias_getParametersDrivers(t_Bias *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg)
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
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data)
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
